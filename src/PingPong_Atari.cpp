#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <iostream>
#include <string>
#include <thread>
#include <list>
#include <fstream>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    list<string> textos;
    fstream imagen;
    imagen.open("./assets/imagen.txt");

    string linea;
    while (getline(imagen,linea))
    {
        textos.push_back(linea);
    }
    imagen.close();
    
    int ancho_pantalla = 125; // Cambiar este valor al ancho real de la pantalla
    int posX = 60;
    int posY = 6;
    bool mover_derecha = true;
    while (true)
    {
        Element dibujo = border(hbox());

        Dimensions Alto = Dimension::Full();
        Dimensions Ancho = Dimension::Full();

        Screen pantalla = Screen::Create(Ancho, Alto);
        Render(pantalla, dibujo);

        int l = 0;
        for (auto &&texto : textos)
        {
            int i = 0;
            for (auto &&letra : texto)
            {
                pantalla.PixelAt(posX + i, posY + l).character = letra;
                i++;
            }
            l++;
        }

        if (mover_derecha)
        {
            posX++;
            if (posX >= ancho_pantalla)
                mover_derecha = false;
        }
        else
        {
            posX--;
            if (posX <= 0)
                mover_derecha = true;
        }

        // Imprimir y restablecer la posición de la pantalla.
        pantalla.Print();
        string reset = pantalla.ResetPosition();
        cout << reset;

        // Aguardar un tiempo antes de mostrar el próximo fotograma.
        this_thread::sleep_for(0.06s);
    }

    return 0;
}