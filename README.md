# biblioteca_poligonos
La biblioteca retorna el área y perimetro de cualquier polígono regular 

## Comandos usados ##

# Código Objeto :

 gcc -fPIC -c ./src/apoth.cc -o ./obj/apoth.o -I ./include
 
 
 gcc -fPIC -c ./src/area.cc -o ./obj/area.o -I ./include
 
 
 gcc -fPIC -c ./src/perim.cc -o ./obj/perim.o -I ./include
 
 
 gcc -fPIC -c ./src/nsides.cc -o ./obj/nsides.o -I ./include
 
 
 gcc -fPIC -c ./src/lsides.cc -o ./obj/lsides.o -I ./include
 
 # Código de biblioteca estática :
 
 ar crs ./lib/static/poli.lib ./obj*.o
 
 ar -crs ./lib/static/poli.lib ./obj/apoth.o ./obj/area.o ./obj/lsides.o ./obj/nsides.o ./obj/perim.o
 
 g++ test.cc -o app/static -I ./lib/include -L ./lib/static -poli
 
 g++ test.cc -o app/test -I ./lib/include -L ./lib/static -lpoli
 
 g++ test.cc -o ./app -I ./include/poli -L ./lib/static/poli.lib -lpoli

./app/static.exe

# Código de biblioteca dinámica :

g++ -shared -o ./lib/dynamic/poli.dll ./obj/apoth.o ./obj/area.o ./obj/lsides.o ./obj/nsides.o ./obj/perim.o

g++ -c test.cc

g++ -o lib/dynamic/dynamic test.o -I ./lib/include -L ./lib/dynamic -lpoli

./lib/dynamic/dynamic.exe


 ## Proceso 
 
1.- Saber qué hará la biblioteca y hacer códigos de cada función.
2.- Hacer una carpeta de carpetas con la estructura de :

![image](https://user-images.githubusercontent.com/66481799/200756573-decd38d1-07ed-46d6-aeb7-69bfcf60be7a.png)


![image](https://user-images.githubusercontent.com/66481799/200965514-377498b5-0798-48d1-a600-439bde8fe749.png)

Árbol del directorio de ésta biblioteca

3.- Hacer archivo cabecera,  
 
 ![image](https://user-images.githubusercontent.com/66481799/200757415-7b7702bf-cd4c-4523-ac1f-725f7f714f10.png)

4.- Usar comandos para conseguir el código objeto en la terminal, los comandos están arriba.

5.- Usar comandos para conseguir cabecera, están arriba

6.- Creación de la biblioteca estática 

7.- Compilación y ejecución del archivo exe

8.- Creación de la biblioteca dinámica 


 


 
