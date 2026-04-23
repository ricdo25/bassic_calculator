Calculadora en C++ con wxWidgets

Este proyecto es una calculadora gráfica desarrollada en C++ utilizando la librería wxWidgets.

*Archivos del proyecto
- main.cpp
- Ventana.cpp
- Ventana.h
- calculator_allSO.cpp
- calculator_allSO.h


*Requisitos
- Tener instalado:
    - C++ (g++)
    - wxWidgets


* Linux (Ubuntu/Debian)
- Instalar wxWidgets:
    - sudo apt update
    - sudo apt install libwxgtk3.2-dev

- Compilar:
    - g++ calculator_allSO.cpp windows.cpp main.cpp `wx-config --cxxflags --libs` -o app

- Ejecutar:
    - ./app


* macOS
- Instalar wxWidgets (con Homebrew):
    - brew install wxwidgets

- Compilar:
    - g++ calculator_allSO.cpp windows.cpp main.cpp `wx-config --cxxflags --libs` -o app

- Ejecutar:
    - ./app


* Windows (MSYS2)
- Compilar:
    - g++ calculator_allSO.cpp windows.cpp main.cpp `wx-config --cxxflags --libs` -o app.exe

- Ejecutar:
    - ./app.exe

*Notas
- El programa es multiplataforma gracias a wxWidgets.
- Es necesario compilar el código en cada sistema operativo.
- El ejecutable de Windows (.exe) no funciona en Linux o macOS.