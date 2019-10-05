
#include <stdio.h>
	#include <stdlib.h>
	#include "Articulo.h"
    #include <string.h>

	int main() {
	 estructArt *articulos;
	   articulos=crearProducto();
	     inicializarIndice(articulos);
	int opcion;
	do{
	opcion=menu("\nSelecciona una modalidad\n1)Gerente\n2)Ventas\n3)Compras\n4)Salir\n",4);
		switch(opcion) {
			case 1:
				gerencia(articulos);
				break;
            case 2:
                ventas(articulos);
				break;
            case 3:
                compras(articulos);
                break;

			}
	}while(opcion!=4);

			}
