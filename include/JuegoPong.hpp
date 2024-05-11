#include "Paleta.hpp"
#include "Pelota.hpp"
#include "Puntuacion.hpp"

class JuegoPong {
private:
    Paleta jugador1;
    Paleta jugador2;
    Pelota pelota;
    Puntuacion puntuacion;
    bool juegoPausado;
    bool juegoTerminado;

public:
    void iniciarJuego();
    void pausarJuego();
    void reanudarJuego();
    void finalizarJuego();
    void actualizar();
};