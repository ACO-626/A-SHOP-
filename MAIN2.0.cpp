#include <stdio.h>
#include <stdlib.h>
#include<string.h>

//#include "Empleado.h"

//#include "Tienda.h"

//#include "Departamento.h"


//Declaramos estructura de dato Empleado
typedef struct _empleado
{
	struct Empleado *anterior;
	char nombre[30];
	char usuario[11];
	char passwd[11];
	char area[20];
	int sueldo;
	struct Empleado *siguiente;
};
typedef struct _empleado EMP;

EMP *WALKER=NULL;
EMP *PRIMERO=NULL;
EMP *ULTIMO=NULL;

void EMPLEADOS ();
void MENUAD ();
int BUSQUEDA (EMP *PRIM);
int main()

{

    //Tienda t1=crearTiendaDepartamental();
	int o=0;   //Es la variable de las opciones
	int ne=0;  //Contador de administradores
	int nec=0; //contador de empleados de compras
	int nev=0; //contador de area de ventas
	int A=0;  //Para el switch de menuad
	do
	{
		EMPLEADOS();
		scanf("%d",&o);
		switch(o)
		{
			case 1:
				if(nec==0)
				{
					printf("\nAun no hay empleados del area de compra registrados, dirigete a Administrador para agregarlos\n");
					getchar();
				}
				else
				{
					//Aqui va el menu de empleados
				}
			break;
		    case 2:

		    	if(nev==0)
				{
		    	printf("\nAun no hay empleados del area de ventas registrados, dirigete a Administrador para agregarlos\n");
		    	getchar();
				}
				else
				{
					//Aqui va el menu de empleados de ventas
				}
			break;
		    case 3:
		    	if(ne==0)
		    	{
		    		EMP *nemp;
		    		nemp=(EMP *)malloc(sizeof(EMP));
		    		printf("Detectamos que no existen empleados registrados, ingrese el nombre del administrador\n");
		    		printf("Nombre:   ");
					fflush(stdin);
		    		gets(nemp->nombre);
		    		printf("\nIngrese el usuario de administrador que desee, debe contener unicamente caracteres alfanumericos,\n");
		    		printf("\nal menos debe tener uno, sin espacios y el sistema es sensible a mayusculas y minusculas\n");
					printf("Nombre de usuario: ");
					fflush(stdin);
					gets(nemp->usuario);
					printf("\nAhora su contrasena debera tener al menos un caracter como mínimo y 10 como maximo, no se aceptan espacios\n ");
					printf("no se aceptan caracteres especiales ni acentos\n\n");
					printf("Contraseña:");
					fflush(stdin);
					gets(nemp->passwd);
					printf("\nAhora debemos de registrar por especificaciones del sistema su salario\n");
					printf("Salario: ");
					fflush(stdin);
					scanf("%i",&nemp->sueldo);
					printf("\n Por ultimo debes registrar tu area de trabajo\n");
					printf("Area: ");
					fflush(stdin);
					gets(nemp->area);
					nemp->anterior=NULL;
					nemp->siguiente=NULL;
					PRIMERO=nemp;
					ULTIMO=nemp;
					ne=1;
				}
				else
				{
					if(BUSQUEDA(PRIMERO)==1)
					{
						printf("\nBienvenido\n");
						do
						{
							MENUAD();
							scanf("%i",&A);
							switch(A)//menuad
							{
							case 1:
							//Para agregar depa
							break;
							case 2:
								//Para eliminar depa
							break;
							case 3:
								//para agregar arti
							break;
							case 4:
								//para eliminar articulo
							break;
							case 5:
								//Modificar datos de empleados
							break;
							case 6:
								//Agregar empleado
							break;
							case 7:
								//Correr empleado
							break;
							case 8:
							break;	
							default:
								printf("\nRespuesta invalida\n");
							break;
							}
						}while(A!=8);
						
					}
					else
					{
						
					}
					
					
					
				}
			
						    	

		    break;
		    default:
		    	printf("Respuesta inválida");
		    	getchar();
		    break;
		}
		
	}while(o!=4);
	
	



    return 0;

}
void EMPLEADOS ()
{
	printf("\nSeleccione su rubro");
	printf("\n\n1) Empleado de ventas\n");
	printf("2)Empleado de compras\n");
	printf("3)Empleado de ventas\n");
	printf("4)Salir\n");
	printf("Respuesta:  ");
		
}

int BUSQUEDA (EMP *PRIM)
{
	char USU[11];
	char CNT[11];
	WALKER=PRIM;
	int i=0;
	do
	{
	printf("\nIniciar sesion\n\n");	
	printf("USUARIO: ");
	fflush(stdin);
	gets(USU);
		do
		{
			if(strcmp(WALKER->usuario,USU)==0)
			{
				
				printf("Contrasena: ");
				fflush(stdin);
				gets(CNT);
				if(strcmp(WALKER->passwd,CNT)==0)
				{
					return 1;
				}
				else
				{
					
				}
			}
			else
			{
				
			}
		}while(WALKER->siguiente!=NULL);
		printf("Contraseña o usuario incorrectos");
		i++;
    }while(i!=3);
	return 0; 
		
	
}
void MENUAD ()
{
	printf("\nSeleccione una accion\n");
	printf("\n1) Agregar departamento");
	printf("\n 2)Dar de baja departamento");
	printf("\n3)Dar de baja articulo");
	printf("\n4)Dar de alta articulo");
	printf("\n5)Modificar datos");
	printf("\n6)Agregar empleado");
	printf("\n7)Dar baja a empleado");
	printf("\n8)Cerrar sesion");
	printf("\nRespuesta:  ");
	
}










