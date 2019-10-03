#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H
#include "Articulo.h"
#include "Empleado.h"
typedef struct{
    char *categoria;
    int codigoSeccion;
   Articulo *producto;
   //Empleado *empleados;
}Departamento;


Departamento crearDepartamento();


Departamento crearDepartamento()
{
    Departamento seccion;
    Articulo *prod=(Articulo*)malloc(sizeof(Articulo));
//    Empleado *emplead=(Empleado*)malloc(sizeof(Empleado));
    char *categ=(char*)malloc(sizeof(char));
    int codigoSecc;
    int cantidadProductos,i;

    printf("\nIntroduce el nombre de la seccion de la tienda (P. ej: Electrónica, línea blanca, farmacia, etc.)");
    scanf("%s",categ);
    seccion.categoria=categ;

//    printf("\nIntroduce cuántos empleados vas a tener");
//    scanf("%d",&cantidadEmpleados);
//    for(i=0;i<cantidadEmpleados;i++)
//    {
//        emplead[i]=crearEmpleado();
//
//    }
//    seccion.empleado=emplead;

    printf("\nIntroduce cuántos productos vas a tener");
    scanf("%d",&cantidadProductos);
    for(i=0;i<cantidadProductos;i++)
    {
       prod[i]=crearArticulo();
    }
    seccion.producto=prod;

    printf("\nIntroduce la clave de la sección");
    scanf("%d",&codigoSecc);
    seccion.codigoSeccion=codigoSecc;

    return seccion;
}


#endif // DEPARTAMENTO_H
