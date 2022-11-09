#include <iostream>
#include "./lib/static/poli.lib"

int main()
{
	float p, ar, ap, n, l, auxi;
	int aux;
	std::cout<<"¿Cuál de los siguientes valores quieres obtener? inserta el número de opción:\n";
	std::cout<<"1)Area\n2)Perimetro\n3)Apotema\n4)Número de lados\n5)Largo de los lados\n"<<std::endl;
	std::cin >> aux;
	if(aux == 1)
	{
		std::cout<<" inserta el perimetro\n";	
		std::cin>> p;
		std::cout<<" inserta el apotema\n";	
		std::cin>> ap;
		auxi = area(p,ap);
		std::cout<<"el area es de : "<<aux;	

	}
	else if(aux == 2)
	{
		std::cout<<" inserta el número de lados\n";	
		std::cin>> n;
		std::cout<<" inserta el largo de los lados\n";	
		std::cin>> l;
		auxi = perim(n,l);
		std::cout<<"el perimetro es de : "<<aux;		
	}
	else if(aux == 3)
	{
		std::cout<<" inserta el área\n";	
		std::cin>> ar;
		std::cout<<" inserta el perimetro\n";	
		std::cin>> p;
		auxi = apoth(ar,p);
		std::cout<<"el apotema es de : "<<aux;
	}
	else if(aux == 4)
	{
		std::cout<<" inserta el perimetro\n";	
		std::cin>> p;
		std::cout<<" inserta el largo de los lados\n";	
		std::cin>> l;
		auxi = nsides(p,l);
		std::cout<<"el número de lados es de : "<<aux;	
	}
	else if(aux == 5)
	{
		std::cout<<" inserta el perimetro\n";	
		std::cin>> p;
		std::cout<<" inserta el número de los lados\n";	
		std::cin>> n;
		auxi = nsides(p,n);
		std::cout<<"el largo de los lados es de : "<<aux;	
	}
	else 
	{
		std::cout<<"la opción no existe";
	}
	return 0; 
}
