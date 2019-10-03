#ifndef EMPLEADO_H
#define EMPLEADO_H
#include<stdio.h>
#include "Tienda.h"
#include "Departamento.h"
typedef struct{
    char *nombre;
    char *apellido;
    char *usuario;
    char *contrasenia;
    char *rango;
    float sueldo;
}Empleado;

Empleado crearEmpleado();
Articulo crearArticulo();
Departamento crearDepartamento();
void iniciarSesion();
void venderArt();
void surtirArt();
void darAltaDepto();
void darBajaDepto();
void addArticulo();
void removeArticulo();
void modificarInfoEmp();

Empleado crearEmpleado()
{
    Empleado empleado;
    char *nom=(char*)malloc(sizeof(char));
    char *apell=(char*)malloc(sizeof(char));
    char *range=(char*)malloc(sizeof(char));
    char *user=(char*)malloc(sizeof(char));
    char *password=(char*)malloc(sizeof(char));

    printf("\nIntroduce el nombre del empleado");
    scanf("%s", nom);

    printf("\nIntroduce su apellido");
    scanf("%s", apell);

    printf("\nIntroduce su rango (ventas, compras, administrador)");
    scanf("%s", range);

    printf("\nIntroduce su usuario");
    scanf("%s", user);

    printf("\nIntroduce su contraseña");
    scanf("%s", password);

    empleado.nombre=nom;
    empleado.apellido=apell;
    empleado.rango=range;
    return empleado;
}

#endif // EMPLEADO_H
