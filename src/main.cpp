#include <SFML/Graphics.hpp>
#include "JuegoPong.hpp"
#include "Menu.hpp"

int main() {
    sf::RenderWindow ventana(sf::VideoMode(800, 600), "Ping Pong Atari");
    JuegoPong juego;
    Menu menu(800, 600);

    bool enMenu = true;

    while (ventana.isOpen()) {
        if (enMenu) {
            sf::Event evento;
            while (ventana.pollEvent(evento)) {
                if (evento.type == sf::Event::Closed)
                    ventana.close();
                else if (evento.type == sf::Event::KeyPressed) {
                    if (evento.key.code == sf::Keyboard::Up) {
                        menu.moverArriba();
                    } else if (evento.key.code == sf::Keyboard::Down) {
                        menu.moverAbajo();
                    } else if (evento.key.code == sf::Keyboard::Enter) {
                        if (menu.getElementoSeleccionado() == 0) {
                            enMenu = false;
                            juego.iniciarJuego();
                        } else if (menu.getElementoSeleccionado() == 1) {
                            ventana.close();
                        }
                    }
                }
            }

            ventana.clear();
            menu.renderizar(ventana);
            ventana.display();
        } else {
            juego.manejarEventos(ventana);

            if (juego.isJuegoTerminado()) {
                juego.esperarReinicio(ventana);
            }

            ventana.clear();
            juego.actualizar();
            juego.renderizar(ventana);
            ventana.display();

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
                enMenu = true;
            }
        }
    }

    return 0;
}