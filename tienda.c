#include <stdio.h>
	#include <stdlib.h>
	#include "Articulo.h"
    #include <string.h>

	gerencia(estructArt *articulos) {
	   int opcion,dato,casilla;
    printf("Bienvenido a la seccion de gerencia\n");

	   do {

	      opcion = menu("\n1)Introducir Articulo\n2)Listar Articulo\n3)Buscar\n4)AcualizarArticulo\n5)BorrarArticulo\n6)Salir\n Opcion: ",6);
	      switch (opcion) {
	        case 1://capturar
       system("cls");
				    insertar(articulos);
				    system("cls");
	             break;
	        case 2://listar
	  system("cls");
	                listar(articulos);

	             break;
	        case 3://buscrar
	        printf("\nBUSCAR PRODUCTO\n ");
	                   casilla=buscarpro(articulos);
	              listaruno(casilla,articulos);
	             break;
	        case 4://acutalizar
	            printf("\nACTUALIZAR PRODUCTO\n ");
	            casilla=buscarpro(articulos);
	              listaruno(casilla,articulos);
	              actualizar(casilla,articulos);
	             break;
	        case 5://borrar
	             borrar(articulos);
	             break;




	         }
	    }while (opcion !=6);

	}
