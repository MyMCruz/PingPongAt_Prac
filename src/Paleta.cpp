#include "Paleta.hpp"

Paleta::Paleta(int x, int y, int ancho, int alto, int velocidad)
    : velocidad(velocidad) {
    paleta.setPosition(x, y);
    paleta.setSize(sf::Vector2f(ancho, alto));
    paleta.setFillColor(sf::Color::White);
}

void Paleta::moverArriba() {
    if (paleta.getPosition().y > 0) {
        paleta.move(0, -velocidad);
    }
}

void Paleta::moverAbajo() {
    if (paleta.getPosition().y + paleta.getSize().y < 600) { 
        paleta.move(0, velocidad);
    }
}

void Paleta::renderizar(sf::RenderWindow& ventana) {
    ventana.draw(paleta);
}

sf::FloatRect Paleta::getBounds() const {
    return paleta.getGlobalBounds();
}