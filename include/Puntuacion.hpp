#ifndef PUNTUACION_HPP
#define PUNTUACION_HPP

#include <SFML/Graphics.hpp>
#include <string>

class Puntuacion {
public:
    Puntuacion();
    void incrementarPuntuacionJugador1();
    void incrementarPuntuacionJugador2();
    void reiniciar();
    void renderizar(sf::RenderWindow& ventana);
    std::string obtenerPuntuacion() const;
    int getSetsJugador1() const { return setsJugador1; }
    int getSetsJugador2() const { return setsJugador2; }

private:
    int puntuacionJugador1;
    int puntuacionJugador2;
    int setsJugador1;
    int setsJugador2;
    sf::Font fuente;
    sf::Text texto;
    std::string convertirPuntuacion(int puntos) const;
    void verificarGanadorSet();
};

#endif // PUNTUACION_HPP