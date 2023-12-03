# trabajo - README

## Requisitos
- Compilador GNU g++
- OpenCV instalado (`sudo apt-get install libopencv-dev`)
- Make (puede instalarse con `sudo apt-get install make`)

## Compilación

Para compilar cada versión del programa, utiliza los siguientes comandos:

  -version secuencial
    make -f makefile_secuencial

  - version thread
    make -f makefile_thread

  - version openmp
    make -f makefile_openmp

## Ejecución

Después de compilar, puedes ejecutar los programas con los siguientes comandos:

- Versión Secuencial
./secuencial <imagen_color> <imagen_gris>
  
- version thread
./thread <imagen_color> <imagen_gris> <num_hebras>

  
- version openmp
./openmp <imagen_color> <imagen_gris>

  
Reemplaza <imagen_color>, <imagen_gris>, y <num_hebras> según tus necesidades.


