# Ping Pong Atari

Este proyecto es una implementación del clásico juego de ping pong Atari utilizando la biblioteca SFML (Simple and Fast Multimedia Library) en C++. El juego permite a dos jugadores controlar paletas y competir entre sí, anotando puntos al evitar que la pelota atraviese su lado del campo.

## Requisitos del Sistema

- Sistema operativo: Windows, Linux, macOS
- Compilador de C++ compatible con C++11 o superior (se recomienda MinGW en Windows)

## Instalación

1. Clona el repositorio:
git clone <URL_DEL_REPOSITORIO>

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

## Funcionalidades

- **Menú Principal:** Permite a los jugadores iniciar el juego o salir.
- **Pausa:** Los jugadores pueden pausar el juego en cualquier momento.
- **Puntuación:** Se lleva un registro de la puntuación de ambos jugadores.
- **Reinicio:** Los jugadores pueden reiniciar el juego después de que termine.

## Diagrama de Clases

![Diagrama de Clases](/docs/class_diagram.png)

## Avances del Proyecto

- **Semana 1:** Configuración inicial del proyecto, estructura de archivos y clases básicas.
- **Semana 2:** Implementación del juego principal y controles básicos.
- **Semana 3:** Mejoras en la interfaz de usuario y manejo de eventos.
- **Semana 4:** Corrección de errores y optimización del código.

## Capturas de Pantalla

![Captura de pantalla 1](/docs/screenshot1.png)
![Captura de pantalla 2](/docs/screenshot2.png)

## Video de Demostración

[Enlace al video de demostración](/docs/demo_video.mp4)

## Contribuyendo

Las contribuciones son bienvenidas. Si encuentras algún error o tienes sugerencias de mejora, por favor abre un problema o envía una solicitud de extracción.

## Créditos

Este proyecto fue desarrollado por [Tu Nombre].

## Licencia

Este proyecto está bajo la [Licencia MIT](LICENSE).
