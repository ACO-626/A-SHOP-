	#include <stdio.h>
	#include <stdlib.h>
	#include "Articulo.h"
    #include <string.h>
/*est */
    ventas(estructArt *articulos){
    	float total=0;
    	int totalarticulos=0,aux=0,casilla,opc;

    		printf("\nBienvenido\n");
    		listar(articulos);
    		printf("Venta:\n");
    		do{
             casilla=buscarpro(articulos);
			 printf("\nCantidad:");
			 scanf("%i",&aux);
			 articulos->articulo[casilla].ventas=articulos->articulo->ventas+aux;

			 total=total*(articulos->articulo[casilla].precio);
			 totalarticulos=totalarticulos+aux;
			 	 printf("\nEl total articulos de compra es: %i\n",totalarticulos);
			 printf("\nEl total de compra es: %.2f\n",total);
			 opc=menu("Desea continuar?\n1)Si\n2)No\n",2);
				}while(opc==1);
			crearEtiqueta(totalarticulos,total);
			}
