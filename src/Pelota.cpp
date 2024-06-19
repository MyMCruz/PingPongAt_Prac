#include "Pelota.hpp"

Pelota::Pelota(int x, int y, int velocidad)
    : velocidadX(velocidad), velocidadY(velocidad) {
    pelota.setPosition(x, y);
    pelota.setRadius(10);
    pelota.setFillColor(sf::Color::White);
}

void Pelota::mover() {
    pelota.move(velocidadX, velocidadY);
}

void Pelota::verificarColisiones(Paleta& jugador1, Paleta& jugador2, Puntuacion& puntuacion) {
    if (pelota.getGlobalBounds().intersects(jugador1.getBounds()) ||
        pelota.getGlobalBounds().intersects(jugador2.getBounds())) {
        velocidadX = -velocidadX;
    }

    if (pelota.getPosition().y <= 0 || pelota.getPosition().y >= 590) {
        velocidadY = -velocidadY;
    }

    if (pelota.getPosition().x <= 0) {
        puntuacion.incrementarPuntuacionJugador2();
        pelota.setPosition(395, 295);
    }

    if (pelota.getPosition().x >= 790) {
        puntuacion.incrementarPuntuacionJugador1();
        pelota.setPosition(395, 295);
    }
}

void Pelota::renderizar(sf::RenderWindow& ventana) {
    ventana.draw(pelota);
}

sf::FloatRect Pelota::getBounds() const {
    return pelota.getGlobalBounds();
}

