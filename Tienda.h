#ifndef TIENDA_H
#define TIENDA_H
#include "Departamento.h"
typedef struct{
    char *nombreTienda;
    char *zona;
   Departamento *secciones;
}Tienda;

Tienda crearTiendaDepartamental();

Tienda crearTiendaDepartamental()
{
    Tienda tienda;

    char *nombreTien=(char*)malloc(sizeof(char));
    char *zone=(char*)malloc(sizeof(char));
    Departamento *secc=(Departamento*)malloc(sizeof(Departamento));

    int cantidadSecciones,i;

    printf("\nIntroduce el nombre de la tienda");
    scanf("%s",nombreTien);
    tienda.nombreTienda=nombreTien;

    printf("\nIntroduce el nombre de la zona de la tienda");
    scanf("%s",zone);
    tienda.zona=zone;

    printf("\n¿Cuántas secciones tendrá tu tienda?");
    scanf("%d",&cantidadSecciones);

    for(i=0;i<cantidadSecciones;i++)
    {
        secc[i]=crearDepartamento();
    }
    tienda.secciones=secc;

    return tienda;
}




#endif // TIENDA_H
