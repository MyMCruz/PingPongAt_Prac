#ifndef PALETA_HPP
#define PALETA_HPP

#include <SFML/Graphics.hpp>

class Paleta {
public:
    Paleta(int x, int y, int ancho, int alto, int velocidad);
    void moverArriba();
    void moverAbajo();
    void renderizar(sf::RenderWindow& ventana);
    sf::FloatRect getBounds() const;

private:
    sf::RectangleShape paleta;
    int velocidad;
};

#endif // PALETA_HPP