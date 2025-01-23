# Graphic

A simple program using SDL2 to create a visual representation that mimics a "broken monitor" effect by displaying random pixel data on the screen. This project demonstrates the use of SDL2 for creating graphical windows and manipulating pixel data.

## Features
- Displays a window titled "Broken Monitor".
- Continuously updates the screen with random pixel data, simulating a glitch or broken monitor effect.
- Basic event handling to close the window when requested.

## Files
### 1. `Graphic.c`
The main source file that:
- Initializes SDL2.
- Creates a window and retrieves its surface.
- Continuously fills the surface with random pixel data.
- Handles the `SDL_QUIT` event to close the application.

### 2. `Makefile`
A simple Makefile for compiling the project. It ensures the project is built with proper linking to the SDL2 library.

### 3. `SDL2.dll`
The SDL2 dynamic library required to run the application on Windows.

### 4. `.vscode/`
Contains configuration files for building and debugging the project in Visual Studio Code.

### 5. `src/`
An optional directory for additional source files (if applicable).

## Requirements
- SDL2 library installed on your system.
- A C compiler such as GCC.
- Windows or a compatible operating system for running the program.

## How to Compile
1. Clone the repository:
   ```bash
   git clone https://github.com/saadfahmi/graphic.git
   cd graphic
   code .
   gcc graphic.c
   ./a.exe
   
   
