	#include <stdio.h>
	#include <stdlib.h>
	#include "Articulo.h"
    #include <string.h>
void crearEtiqueta(int totalarticulos, float total){
FILE *file;
float por;
file = fopen("ticket.txt", "w+");
    if(file == NULL)
    {
        printf("No hay archivo");
    }
   fprintf(file,"A-SHOP\n\tEL mejor super mercado   \n  \tTicket de venta\n\n Total de articulos : %i\n\tTotal: %f",totalarticulos,total);
   fclose(file);
   printf("\nEtiqueta generada\n");

}
