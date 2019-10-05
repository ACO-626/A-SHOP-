#include <stdio.h>
#include <stdlib.h>
#include<string.h>

//#include "Empleado.h"

//#include "Tienda.h"

//#include "Departamento.h"


//Declaramos estructura de dato Empleado
typedef struct _empleado
{
	struct _empleado *anterior;
	char nombre[30];
	char usuario[11];
	char passwd[11];
	char area[20];
	int sueldo;
	struct _empleado *siguiente;
};
typedef struct _empleado EMP;

EMP *WALKER=NULL;
EMP *PRIMERO=NULL;
EMP *PRIMEROC=NULL;
EMP *PRIMEROV=NULL;
EMP *ULTIMO=NULL;
EMP *ULTIMOC=NULL;
EMP *ULTIMOV=NULL;
EMP *DESTRUCTOR=NULL;

void EMPLEADOS ();
void MENUAD ();
void MENUC ();
void MENUV ();
int INCINERAR(EMP *PRIM, EMP *LAST, int e);
int BUSQUEDA (EMP *PRIM);
int main()

{

    //Tienda t1=crearTiendaDepartamental();
	int o=0;   //Es la variable de las opciones
	int ne=0;  //Contador de administradores
	int nec=0; //contador de empleados de compras
	int nev=0; //contador de area de ventas
	int A=0;  //Para el switch de menuad
	int AV=0; //Para el menu de ventas
	int AC=0; //Para menu de compras
	int muerte=0;
	do
	{
		EMPLEADOS();
		scanf("%d",&o);
		switch(o)
		{
			case 1:
				if(nev==0)
				{
					printf("\nAun no hay empleados del area de venta registrados, dirigete a Administrador para agregarlos\n");
					getchar();
				}
				else
				{
					if(BUSQUEDA(PRIMEROV)==1)
					{
						//Iniciado sesión
						do
						{
							MENUV ();
							scanf("%i",&AV);
							switch(AV)
							{
								case 1://cambiar producto
								break;
								case 2:
								break;
								default:
								printf("\nRespuesta invalida\n");
								getchar();
								break;
							}
						}while(AV!=2);
						
					}
					else
					{
					}
					
					
				}
			break;
		    case 2:

		    	if(nec==0)
				{
		    	printf("\nAun no hay empleados del area de compras registrados, dirigete a Administrador para agregarlos\n");
		    	getchar();
				}
				else
				{
					if(BUSQUEDA(PRIMEROC)==1)
					{
						//Iniciado sesión
						do
						{
							MENUC ();
							scanf("%i",&AC);
							switch(AC)
							{
								case 1://cambiar producto
								break;
								case 2:
								break;
								default:
								printf("\nRespuesta invalida\n");
								getchar();
								break;
							}
						}while(AC!=2);
						
					}
					else
					{
					}
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
								EMP *emp;
								emp=(EMP *)malloc(sizeof(EMP));
								printf("\nIngrese el nombre del nuevo empleado: ");
								fflush(stdin);
								gets(emp->nombre);
								printf("\nIngrese el nombre del usuari: ");
								printf("\nal menos debe tener uno, sin espacios y el sistema es sensible a mayusculas y minusculas\n");
								printf("Nombre de usuario: ");
								fflush(stdin);
								gets(emp->usuario);
							    printf("\nAhora su contrasena debera tener al menos un caracter como mínimo y 10 como maximo, no se aceptan espacios\n ");
					            printf("no se aceptan caracteres especiales ni acentos\n\n");
					            printf("Contraseña:");
					            fflush(stdin);
					            gets(emp->passwd);
					            printf("\nAhora debemos de registrar por especificaciones del sistema su salario\n");
								printf("Salario: ");
								fflush(stdin);
								scanf("%i",&emp->sueldo);
								printf("\n Por ultimo debes registrar su area de trabajo solo puede ser compra (C) o ventas(V) o Admin (A)\n ");
								printf("Area C para compras V para ventas y A para Admin: ");
								fflush(stdin);
								gets(emp->area);
								if(strcmp(emp->area,"C")==0)
								{
									if(nec==0)
									{
									emp->anterior=NULL;
									emp->siguiente=NULL;
									PRIMEROC=emp;
									ULTIMOC=emp;
									nec++;
									}
									else
									{
										emp->anterior=ULTIMOC;
										emp->siguiente=NULL;
										ULTIMOC->siguiente=emp;
										ULTIMOC=emp;
									 nec++;
									}
								
								}
								else
								{
									if(strcmp(emp->area,"V")==0)
									{
									if(nev==0)
									{
									emp->anterior=NULL;
									emp->siguiente=NULL;
									PRIMEROV=emp;
									ULTIMOV=emp;
									nev++;
									}
									else
									{
										emp->anterior=ULTIMOV;
										emp->siguiente=NULL;
										ULTIMOV->siguiente=emp;
										ULTIMOV=emp;
									    nev++;
									}
									}
									else
									{
								
								   if(strcmp(emp->area,"A")==0)
									{
									if(ne==0)
									{
									emp->anterior=NULL;
									emp->siguiente=NULL;
									PRIMERO=emp;
									ULTIMO=emp;
									ne++;
									}
									else
									{
										emp->anterior=ULTIMO;
										emp->siguiente=NULL;
										ULTIMO->siguiente=emp;
										ULTIMO=emp;
									    ne++;
									}
									}
									else
									{									
									printf("\nArea no valida, intenta de nuevo\n");
									getchar();
									break;
									}
								    }
								}
								
								
							break;
							case 7:
								//Correr empleado
								printf("\nDe que area desea eliminar: ");
								EMPLEADOS ();
								scanf("%d",&muerte);
								switch(muerte)
								{
									case 1:
										if(INCINERAR (PRIMEROV, ULTIMOV, nev)==1)
										{
											nev--;
										}
										else
										{
											
										}
									break;
									case 2:
									if(INCINERAR (PRIMEROC, ULTIMOC, nec)==1)
										{
											nec--;
										}
										else
										{
											
										}
									break;
									case 3:
										if(INCINERAR (PRIMERO,ULTIMO,ne)==1)
										{
											ne--;
										}
										else
										{
											
										}
									break;
									case 4:
									break;
									default:
									break;
									
								}
								
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
	printf("3)ADMINISTRADOR\n");
	printf("4)Salir\n");
	printf("Respuesta:  ");
		
}

int BUSQUEDA (EMP *PRIM)
{
	char USU[11];
	char CNT[11];
	int i=0;
	int p=0;
	do
	{
	printf("\nIniciar sesion\n\n");	
	printf("USUARIO: ");
	fflush(stdin);
	gets(USU);
	WALKER=PRIM;
	p=0;
		do
		{
			if(p==0)
			{
				p++;
			}
			else
			{
				WALKER=WALKER->siguiente;
		    }
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
	printf("\n2)Dar de baja departamento");
	printf("\n3)Dar de baja articulo");
	printf("\n4)Dar de alta articulo");
	printf("\n5)Modificar datos");
	printf("\n6)Agregar empleado");
	printf("\n7)Dar baja a empleado");
	printf("\n8)Cerrar sesion");
	printf("\nRespuesta:  ");
	
}
void MENUC ()
{
	printf("\n1)Sustituir producto");
	printf("\n2)Cerrar sesion");
	printf("\nRespuesta:  ");
}

void MENUV ()
{
	printf("\n1)Producto vendido");
	printf("\n2)Cerrar sesion");
	printf("\nRespuesta:  ");
}

int INCINERAR(EMP *PRIM, EMP *LAST, int e)
{
	int i=0;
	int p=0;
	char USU[11];
	if(e==0)
	{
		printf("\nNo hay nada que eliminar\n");
		getchar();
		return 0;
	}
	else
	{
		if(e==1)
		{
			DESTRUCTOR=PRIM;
			PRIM=NULL;
			WALKER=NULL;
			free(DESTRUCTOR);
			printf("\nSe eliminara el unico elemento\n");
			return 1;
		}
		else
		{
		  do{
		  		printf("USUARIO A ELIMINAR: ");
		  		fflush(stdin);
		  		gets(USU);
		  		p=0;
		  		WALKER=PRIM;
				do
				 {
				  if(p==0)
				   {
					p++;
				   }
				   else
				   {
					WALKER=WALKER->siguiente;
				   }  
				   if(strcmp(WALKER->usuario,USU)==0)
				        {   
						if(WALKER->anterior==NULL)
						{
						 DESTRUCTOR=WALKER;
						 WALKER=WALKER->siguiente;
						 PRIM=WALKER;
						 WALKER->anterior=NULL;	
						 free(DESTRUCTOR);
						}
						else
						{
							if(WALKER->siguiente==NULL)
							{
								DESTRUCTOR=WALKER;
								WALKER=WALKER->anterior;
								LAST=WALKER;
								WALKER->siguiente=NULL;	
								free(DESTRUCTOR);
								
							}
							else
							{
								DESTRUCTOR=WALKER;
								WALKER=WALKER->anterior;
								WALKER->siguiente=DESTRUCTOR->siguiente;
								WALKER=WALKER->siguiente;
								WALKER->anterior=DESTRUCTOR->anterior;
								free(DESTRUCTOR);
							}
						}
						return 1;	
				}
				else
				{
				}
			}while(WALKER->siguiente!=NULL);
			printf("\nNo se encontró el usuario vuelva a intentar\n");
			i++;
	       }while(i!=3);
		}
	}
		
}







