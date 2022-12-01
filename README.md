# biblioteca_poligonos
La biblioteca retorna el área, perimetro, cantidad de lados, longitud de lados, y apotema de cualquier polígono regular 

## Comandos usados ##

# Código Objeto :


g++ -fPIC -c ./src/apoth.cpp -o ./obj/apoth.o -I ./include

g++ -fPIC -c ./src/area.cpp -o ./obj/area.o -I ./include

g++ -fPIC -c ./src/perim.cpp -o ./obj/perim.o -I ./include

g++ -fPIC -c ./src/nsides.cpp -o ./obj/nsides.o -I ./include

g++ -fPIC -c ./src/lsides.cpp -o ./obj/lsides.o -I ./include

--

Nota

g++ -fPIC -c ./src/*.cpp -o ./obj/*.o -I ./include   - no se puede usar


 # Código de biblioteca estática :

ar crs ./lib/static/libpoli.a ./obj/*.o

- Paso 2 : Detalle, para que funcione la librería tiene que ser nombrada lib"x".a, en éste caso libpoli.a

g++ test.cpp -o ./app/static -I ./lib/include -L ./lib/static -lpoli

./app/static.exe



# Código de biblioteca dinámica :

- Paso 1 : Detalle, para que funcione la librería tiene que ser nombrada lib"x".so, en éste caso libpoli.so

g++ -shared -o ./lib/dynamic/libpoli.so  ./obj/*.o

g++ -c test.cpp

g++ -o ./app/dynamic test.o -I ./lib/include -L ./lib/dynamic -lpoli

./app/dynamic.exe


 ## Proceso 
 
1.- Saber qué hará la biblioteca y hacer códigos de cada función.

2.- Hacer una carpeta de carpetas con la estructura de :

![image](https://user-images.githubusercontent.com/66481799/200756573-decd38d1-07ed-46d6-aeb7-69bfcf60be7a.png)

![image](https://user-images.githubusercontent.com/66481799/204229597-50d30758-d3fe-4202-9b7e-a26d2730e8bf.png)

Árbol del directorio de ésta biblioteca

3.- Hacer archivo cabecera,  
 
![image](https://user-images.githubusercontent.com/66481799/204933711-637309b2-75a8-404b-ab8f-bae3a2346efb.png)

4.- Usar comandos para conseguir el código objeto en la terminal, los comandos están arriba.

5.- Usar comandos para conseguir cabecera, están arriba

6.- Creación de la biblioteca estática 

7.- Compilación y ejecución del archivo exe

8.- Creación de la biblioteca dinámica 

9.- Ejecución del archivo exe con biblioteca dinámica



# Más información del tema :

https://docs.google.com/document/d/1G8oReRtNNPqdNPNW9BmuINHysaPYVWAJbhu9thzPVeg/edit?usp=sharing
 

# Infografía :


![Proceso de compilación](https://user-images.githubusercontent.com/66481799/204932968-b45aa069-7c0f-4bf4-9f0b-fe3441be4263.png)


https://www.canva.com/design/DAFTd9LYZR4/FcLaXUSvzCJmwO9GCsSr0w/edit?utm_content=DAFTd9LYZR4&utm_campaign=designshare&utm_medium=link2&utm_source=sharebutton
 
