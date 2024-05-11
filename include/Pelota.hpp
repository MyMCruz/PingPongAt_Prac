class Pelota {
private:
    int posX;
    int posY;
    int velocidadX;
    int velocidadY;
    int velocidad;

public:
    void mover();
    void verificarColisiones();
    void renderizar();
};