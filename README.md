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

ar -rvs ./lib/static/poli.a ./obj/*.o

g++ test.cpp -o ./app/prueba ./src/*.cc    :    
compilación con enlace, creación de ejecutable de biblioteca estática

./app/static.exe



# Código de biblioteca dinámica :

g++ -shared -o ./lib/dynamic/poli.dll  ./obj/*.o

g++ -c test.cpp

g++ -o lib/dynamic/dynamic test.o -I ./lib/include -L ./lib/dynamic -l ./include/poli



 ## Proceso 
 
1.- Saber qué hará la biblioteca y hacer códigos de cada función.
2.- Hacer una carpeta de carpetas con la estructura de :

![image](https://user-images.githubusercontent.com/66481799/200756573-decd38d1-07ed-46d6-aeb7-69bfcf60be7a.png)


![image](https://user-images.githubusercontent.com/66481799/203774219-dd4313f8-42e9-45a5-94d3-9981e01d2f80.png)

Árbol del directorio de ésta biblioteca

3.- Hacer archivo cabecera,  
 
 ![image](https://user-images.githubusercontent.com/66481799/200757415-7b7702bf-cd4c-4523-ac1f-725f7f714f10.png)

4.- Usar comandos para conseguir el código objeto en la terminal, los comandos están arriba.

5.- Usar comandos para conseguir cabecera, están arriba

6.- Creación de la biblioteca estática 

7.- Compilación y ejecución del archivo exe

8.- Creación de la biblioteca dinámica 


 


 
