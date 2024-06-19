#ifndef PELOTA_HPP
#define PELOTA_HPP

#include <SFML/Graphics.hpp>
#include "Paleta.hpp"
#include "Puntuacion.hpp"

class Pelota {
public:
    Pelota(int x, int y, int velocidad);
    void mover();
    void verificarColisiones(Paleta& jugador1, Paleta& jugador2, Puntuacion& puntuacion);
    void renderizar(sf::RenderWindow& ventana);
    sf::FloatRect getBounds() const;

private:
    sf::CircleShape pelota;
    int velocidadX;
    int velocidadY;
};

#endif // PELOTA_HPP