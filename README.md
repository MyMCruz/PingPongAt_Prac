# Ping Pong Atari

Este proyecto es una implementación del clásico juego de ping pong Atari utilizando la biblioteca SFML (Simple and Fast Multimedia Library) en C++. El juego permite a dos jugadores controlar paletas y competir entre sí, anotando puntos al evitar que la pelota atraviese su lado del campo.

## Requisitos del Sistema

- Sistema operativo: Windows, Linux, macOS
- Compilador de C++ compatible con C++11 o superior (se recomienda MinGW en Windows)

## Instalación

1. Clona el repositorio:
git clone <https://github.com/MyMCruz/PingPongAt_Prac.git>

2. Compila el proyecto utilizando el makefile proporcionado:
make

3. Ejecuta el juego:
./bin/JuegoPong.exe


## Controles

- Jugador 1:
  - Mover arriba: Tecla W
  - Mover abajo: Tecla S

- Jugador 2:
  - Mover arriba: Flecha arriba
  - Mover abajo: Flecha abajo

- Pausar juego: Tecla Escape

## Reglas del Juego

El juego sigue las reglas básicas del ping pong, con algunas adaptaciones:

- Los jugadores compiten para evitar que la pelota atraviese su lado del campo.
- Cada vez que un jugador no logra devolver la pelota, el oponente anota un punto.
- Si un jugador anota puntos suficientes, gana un set.
- El primer jugador en ganar un número predefinido de sets gana el juego.

## Funcionalidades

- **Menú Principal:** Permite a los jugadores iniciar el juego o salir.
- **Pausa:** Los jugadores pueden pausar el juego en cualquier momento.
- **Puntuación:** Se lleva un registro de la puntuación de ambos jugadores.
- **Reinicio:** Los jugadores pueden reiniciar el juego después de que termine.

## Diagrama de Clases

![Diagrama de Clases](/assets/class_diagram.png)

## Avances del Proyecto

- **Semana 1:** Configuración inicial del proyecto, estructura de archivos y clases básicas.
- **Semana 2:** Implementación del juego principal y controles básicos.
- **Semana 3:** Mejoras en la interfaz de usuario y manejo de eventos.
- **Semana 4:** Corrección de errores y optimización del código.

## Capturas de Pantalla

![Captura de pantalla 1](/assets/screenshot1.png)
![Captura de pantalla 2](/assets/screenshot2.png)
![Captura de pantalla 3](/assets/screenshot3.png)
![Captura de pantalla 4](/assets/screenshot4.png)

## Video de Demostración

![Captura de video de demostración](/assets/demo_video.mp4)

Enlace al video de demostración:  <https://youtu.be/n8_-G0_Hfv8>

## Contribuyendo

Las contribuciones son bienvenidas. Si encuentras algún error o tienes sugerencias de mejora, por favor abre un problema o envía una solicitud de extracción.

