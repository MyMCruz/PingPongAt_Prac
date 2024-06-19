#ifndef MENU_HPP
#define MENU_HPP

#include <SFML/Graphics.hpp>

class Menu {
public:
    Menu(float ancho, float alto);
    void renderizar(sf::RenderWindow& ventana);
    void moverArriba();
    void moverAbajo();
    int getElementoSeleccionado() const;

private:
    int elementoSeleccionado;
    sf::Font fuente;
    sf::Text menu[2];
};

#endif // MENU_HPP
