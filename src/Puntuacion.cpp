#include "Puntuacion.hpp"

Puntuacion::Puntuacion() : puntuacionJugador1(0), puntuacionJugador2(0), setsJugador1(0), setsJugador2(0) {
    fuente.loadFromFile("arial.ttf");
    texto.setFont(fuente);
    texto.setCharacterSize(24);
    texto.setFillColor(sf::Color::White);
    texto.setPosition(250, 10);
}

void Puntuacion::incrementarPuntuacionJugador1() {
    if (puntuacionJugador1 >= 3 && puntuacionJugador2 >= 3) {
        if (puntuacionJugador1 == puntuacionJugador2) {
            puntuacionJugador1++; // Ad-In
        } else if (puntuacionJugador1 > puntuacionJugador2) {
            setsJugador1++; // Gana el set
            puntuacionJugador1 = 0;
            puntuacionJugador2 = 0;
        } else {
            puntuacionJugador2--; // Deuce
        }
    } else {
        puntuacionJugador1++;
    }
    verificarGanadorSet();
}

void Puntuacion::incrementarPuntuacionJugador2() {
    if (puntuacionJugador2 >= 3 && puntuacionJugador1 >= 3) {
        if (puntuacionJugador2 == puntuacionJugador1) {
            puntuacionJugador2++; // Ad-Out
        } else if (puntuacionJugador2 > puntuacionJugador1) {
            setsJugador2++; // Gana el set
            puntuacionJugador1 = 0;
            puntuacionJugador2 = 0;
        } else {
            puntuacionJugador1--; // Deuce
        }
    } else {
        puntuacionJugador2++;
    }
    verificarGanadorSet();
}

void Puntuacion::reiniciar() {
    puntuacionJugador1 = 0;
    puntuacionJugador2 = 0;
    setsJugador1 = 0;
    setsJugador2 = 0;
}

void Puntuacion::renderizar(sf::RenderWindow& ventana) {
    texto.setString(obtenerPuntuacion());
    ventana.draw(texto);
}

std::string Puntuacion::convertirPuntuacion(int puntos) const {
    switch (puntos) {
        case 0: return "Love";
        case 1: return "15";
        case 2: return "30";
        case 3: return "40";
        default: return "";
    }
}

std::string Puntuacion::obtenerPuntuacion() const {
    if (puntuacionJugador1 >= 3 && puntuacionJugador2 >= 3) {
        if (puntuacionJugador1 == puntuacionJugador2) {
            return "Deuce";
        } else if (puntuacionJugador1 == puntuacionJugador2 + 1) {
            return "Ad-In";
        } else if (puntuacionJugador2 == puntuacionJugador1 + 1) {
            return "Ad-Out";
        }
    }
    return "Jugador 1: " + convertirPuntuacion(puntuacionJugador1) + " - Jugador 2: " + convertirPuntuacion(puntuacionJugador2) +
           " | Sets: " + std::to_string(setsJugador1) + "-" + std::to_string(setsJugador2);
}

void Puntuacion::verificarGanadorSet() {
    if (puntuacionJugador1 > 3 && puntuacionJugador1 >= puntuacionJugador2 + 2) {
        setsJugador1++;
        puntuacionJugador1 = 0;
        puntuacionJugador2 = 0;
    }
    if (puntuacionJugador2 > 3 && puntuacionJugador2 >= puntuacionJugador1 + 2) {
        setsJugador2++;
        puntuacionJugador1 = 0;
        puntuacionJugador2 = 0;
    }
}