#ifndef EMPLEADO_H
#define EMPLEADO_H
#include<stdio.h>
#include<string.h>
#include "Tienda.h"
#include "Departamento.h"
#include "Articulo.h"
typedef struct{
    char *nombre;
    char *apellido;
    char *usuario;
    char *contrasenia;
    char *rango;
    float sueldo;
}Empleado;

Empleado crearEmpleado();

void iniciarSesion(char *user, char *passwd);
void venderArt(Articulo art);
void surtirArt(Articulo art);
void darAltaDepto(Departamento depto);
void darBajaDepto(Departamento depto);
void addArticulo(Articulo a, Departamento d);
void removeArticulo(Articulo a);
void modificarInfoEmp(Empleado emp);

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



void addArticulo(Articulo a, Departamento d)
{
    Articulo *ap_a;
    Departamento *ap_depto;


    ap_depto=&d;
    a=crearArticulo();
    ap_a=&a;
    strc
    ap_depto->producto=ap_a;

}


#endif // EMPLEADO_H
