# biblioteca_poligonos
La biblioteca retorna el área y perimetro de cualquier polígono regular 

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

g++ -o lib/dynamic/dynamic test.o -I ./lib/include -L ./lib/dynamic -lpoli


 ## Proceso 
 
1.- Saber qué hará la biblioteca y hacer códigos de cada función.
2.- Hacer una carpeta de carpetas con la estructura de :

![image](https://user-images.githubusercontent.com/66481799/200756573-decd38d1-07ed-46d6-aeb7-69bfcf60be7a.png)

![image](https://user-images.githubusercontent.com/66481799/204229597-50d30758-d3fe-4202-9b7e-a26d2730e8bf.png)

Árbol del directorio de ésta biblioteca

3.- Hacer archivo cabecera,  
 
 ![image](https://user-images.githubusercontent.com/66481799/200757415-7b7702bf-cd4c-4523-ac1f-725f7f714f10.png)

4.- Usar comandos para conseguir el código objeto en la terminal, los comandos están arriba.

5.- Usar comandos para conseguir cabecera, están arriba

6.- Creación de la biblioteca estática 

7.- Compilación y ejecución del archivo exe

8.- Creación de la biblioteca dinámica 

9.- Ejecución del archivo exe con biblioteca dinámica


 


 
