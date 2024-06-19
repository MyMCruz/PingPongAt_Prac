#ifndef JUEGOPONG_HPP
#define JUEGOPONG_HPP

#include <SFML/Graphics.hpp>
#include "Paleta.hpp"
#include "Pelota.hpp"
#include "Puntuacion.hpp"

class JuegoPong {
public:
    JuegoPong();
    void iniciarJuego();
    void pausarJuego();
    void reanudarJuego();
    void finalizarJuego();
    void actualizar();
    void renderizar(sf::RenderWindow& ventana);
    bool isJuegoTerminado() const;
    void manejarEventos(sf::RenderWindow& ventana);
    void esperarInicio(sf::RenderWindow& ventana);
    void esperarReinicio(sf::RenderWindow& ventana);

private:
    Paleta jugador1;
    Paleta jugador2;
    Pelota pelota;
    Puntuacion puntuacion;
    bool juegoPausado;
    bool juegoTerminado;
    bool esperandoReinicio;
};

#endif // JUEGOPONG_HPP