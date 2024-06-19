#include "JuegoPong.hpp"

JuegoPong::JuegoPong()
    : jugador1(10, 300, 10, 80, 65), jugador2(780, 300, 10, 80, 65),
      pelota(395, 295, 1), juegoPausado(false), juegoTerminado(false), esperandoReinicio(false) {
}

void JuegoPong::iniciarJuego() {
    juegoPausado = false;
    juegoTerminado = false;
    puntuacion.reiniciar();
    pelota = Pelota(395, 295, 1);
}

void JuegoPong::pausarJuego() {
    juegoPausado = true;
}

void JuegoPong::reanudarJuego() {
    juegoPausado = false;

}

void JuegoPong::finalizarJuego() {
    juegoTerminado = true;
    esperandoReinicio = true;
}

void JuegoPong::actualizar() {
    if (!juegoPausado && !juegoTerminado) {
        pelota.mover();
        pelota.verificarColisiones(jugador1, jugador2, puntuacion);
        if (puntuacion.getSetsJugador1() >= 3 || puntuacion.getSetsJugador2() >= 3) {
            finalizarJuego();
        }
    }
}

void JuegoPong::renderizar(sf::RenderWindow& ventana) {
    jugador1.renderizar(ventana);
    jugador2.renderizar(ventana);
    pelota.renderizar(ventana);
    puntuacion.renderizar(ventana);
}

bool JuegoPong::isJuegoTerminado() const {
    return juegoTerminado;
}

void JuegoPong::manejarEventos(sf::RenderWindow& ventana) {
    sf::Event evento;
    while (ventana.pollEvent(evento)) {
        if (evento.type == sf::Event::Closed)
            ventana.close();
        else if (evento.type == sf::Event::KeyPressed) {
            if (evento.key.code == sf::Keyboard::W)
                jugador1.moverArriba();
            else if (evento.key.code == sf::Keyboard::S)
                jugador1.moverAbajo();
            else if (evento.key.code == sf::Keyboard::Up)
                jugador2.moverArriba();
            else if (evento.key.code == sf::Keyboard::Down)
                jugador2.moverAbajo();
            else if (evento.key.code == sf::Keyboard::Enter && esperandoReinicio) {
                iniciarJuego();
            }
        }
    }
}
void JuegoPong::esperarInicio(sf::RenderWindow& ventana) {
    bool esperandoInicio = true;
    while (esperandoInicio) {
        sf::Event evento;
        while (ventana.pollEvent(evento)) {
            if (evento.type == sf::Event::Closed)
                ventana.close();

            // Verificar si se ha presionado la tecla Enter
            if (evento.type == sf::Event::KeyPressed && evento.key.code == sf::Keyboard::Enter) {
                iniciarJuego();
                esperandoInicio = false;
            }
        }
    }
}

void JuegoPong::esperarReinicio(sf::RenderWindow& ventana) {
    while (esperandoReinicio) {
        sf::Event evento;
        while (ventana.pollEvent(evento)) {
            if (evento.type == sf::Event::Closed)
                ventana.close();

            if (evento.type == sf::Event::KeyPressed && evento.key.code == sf::Keyboard::Enter) {
                iniciarJuego();
                esperandoReinicio = false;
            }
        }
    }
}
