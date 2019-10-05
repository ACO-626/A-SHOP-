#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "Articulo.h"
	#include "Departamento.h"

	int menu(char texto[], int x)
	{
	    int opcion;
	    do
	    {
	        printf ("%s", texto);
	        scanf("%i", &opcion);
	        if (opcion < 1 || opcion > x)
	            printf("\nError: opcion no valida\n");
	    }
	    while (opcion < 1 || opcion > x);
	    return opcion;
	}

	estructArt *crearProducto()
	{
	    estructArt *p;
	    int i;
	    p=(estructArt *)calloc(5,sizeof(estructArt));
	    	  p->articulo=(Articulo *)calloc(MAX,sizeof(Articulo));
	    for(i=0;i<MAX;i++)	{
	    p->articulo[i].art=(char *)calloc(MAX,sizeof(char));

	    	}

	    return p;
	}
	void inicializarIndice(estructArt *x)
	{
	    x->indice = -1;
	}
	int validarEspacio(estructArt *x)
	{
	    return (x->indice < MAX-1);
	}
	void insertar(estructArt *x)
	{
	    (x->indice)++;
	    printf("\nIntroduce el  codigo de barras del articulo:\n");
	    scanf("%d",&x->articulo[x->indice].clave);
	    printf("\nIntroduce el nombre del producto:\n");
	    fflush(stdin);
	    scanf("%s",x->articulo[x->indice].art);
        printf("\nIntroduce el precio del producto:\n");
	    scanf("%f",&x->articulo[x->indice].precio);

	    printf("\nIntroduce el precio del producto para surtir:\n");
	    scanf("%f",&x->articulo[x->indice].precioSurtir);



	}
	void listar(estructArt *x)
	{
	    int i;

	    for(i=0;i<=x->indice;i++)
	        printf("\n\t %i\t %s\t%.2f\t %.2f\n",x->articulo[i].clave ,x->articulo[i].art ,x->articulo[i].precio ,x->articulo[i].precioSurtir);
	}
	int buscarpro(estructArt *x)
	{
	    int i,barr;
	    printf("Ingrese el codigo de barras: \n");
	                scanf("%i",&barr);
	    for(i=0;i<=x->indice;i++)
	    if((x->articulo[i].clave)==barr)
	    return i;
	      	}
	void  listaruno(int i,estructArt *x){
	 printf("\n\t %i\t %s\t%.2f\t%.2f\n ",x->articulo[i].clave ,x->articulo[i].art ,x->articulo[i].precio,x->articulo[i].precioSurtir);
		}

    void actualizar(int casilla,estructArt *x)
	{
	  int opcion;

	  do{
	  	opcion=menu("Que desea actualizar?\n1)Nombre\n2)Codigo de barras\n3)Precio\n4)Precio para surtir\n5)Salir\n",5);
	  	switch(opcion){
	  		case 1:
	  		printf("Nuevo Nombre: ");
	  		 fflush(stdin);
	    scanf("%s",x->articulo[casilla].art);
	    break;
	    case 2:
	    	printf("\nIntroduce el  codigo de barras del articulo:\n");
	    scanf("%d",&x->articulo[casilla].clave);
	    	case 3:
	    		  printf("\nIntroduce el precio del producto:\n");
	    scanf("%f",&x->articulo[casilla].precio);
	    break;
            case 4:
                printf("\nIntroduce el precio para surtir del producto:\n");
                scanf("%f",&x->articulo[casilla].precioSurtir);
                break;
	    case 5:

	    	return;
			  }
	  	}while(opcion!=5);

	}
	void lecturaArchivo(char path[]){

	    FILE *archivo;
	    char letras;
	    archivo=fopen(path, "r");
	    if(archivo!=NULL){
	        while(!feof(archivo))
	        {
	            fscanf(archivo, "%c\n",&letras);
	            printf("%c",letras);
	        }
	    }
	    fclose(archivo);
	    printf("\nOK");
	}
	void borrar(estructArt *x){
		int dato;
		dato=buscarpro(x);
			x->articulo[dato].precio=x->articulo[x->indice].precio;
		x->articulo[dato].clave=x->articulo[x->indice].clave;
		strcpy(x->articulo[dato].art,x->articulo[x->indice].art);

			(x->indice)--;


	}
