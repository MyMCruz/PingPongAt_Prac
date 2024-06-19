#include "Menu.hpp"

Menu::Menu(float ancho, float alto) {
    if (!fuente.loadFromFile("arial.ttf")) {
        // Manejar error
    }

    menu[0].setFont(fuente);
    menu[0].setFillColor(sf::Color::Red);
    menu[0].setString("Iniciar");
    menu[0].setPosition(sf::Vector2f(ancho / 2, alto / (2 + 1) * 1));

    menu[1].setFont(fuente);
    menu[1].setFillColor(sf::Color::White);
    menu[1].setString("Salir");
    menu[1].setPosition(sf::Vector2f(ancho / 2, alto / (2 + 1) * 2));

    elementoSeleccionado = 0;
}

void Menu::renderizar(sf::RenderWindow& ventana) {
    for (int i = 0; i < 2; i++) {
        ventana.draw(menu[i]);
    }
}

void Menu::moverArriba() {
    if (elementoSeleccionado - 1 >= 0) {
        menu[elementoSeleccionado].setFillColor(sf::Color::White);
        elementoSeleccionado--;
        menu[elementoSeleccionado].setFillColor(sf::Color::Red);
    }
}

void Menu::moverAbajo() {
    if (elementoSeleccionado + 1 < 2) {
        menu[elementoSeleccionado].setFillColor(sf::Color::White);
        elementoSeleccionado++;
        menu[elementoSeleccionado].setFillColor(sf::Color::Red);
    }
}

int Menu::getElementoSeleccionado() const {
    return elementoSeleccionado;
}
