#include <stdio.h> //indica que se debe incluis la bibliote standar input output



void menu();  //Prototipo de la función 

int O=0;//Variable que indica la opcion de TIPO de empleado
int j=0;//VAriable que indica si el usuario acaba de iniciar sesión

int main(int argc, char const *argv[]) //Función principal
	{
		do
		{

			menu();                    //función q muestra el menú de empleados 
			printf("RESPUESTA:  ");    //tex
			scanf("%d",&O);            //pide la respuesta
			printf("\n\n\n");          //saltos de lin
			switch (O)
			{
				case 1://Caso en que es empleado de ventas
					printf("Ha seleccionado la opción uno\n\n");
					printf("EMPLEADO DE VENTAS\n");
				break;
				case 2://Caso en que es empleado de compras
					printf("Ha seleccionado la opci%cn dos\n\n",162);
					printf("EMPLEADO DE COMPRAS\n");
				break;
				case 3://Caso en que es administrador
					printf("Ha seleccionado la opci%cn tres\n\n",162 );
					printf("ADMINISTRADOR\n");

				break;
				case 4://Caso en que se desea salir del sis.
					printf("ADIOS\n\n\n\n");
				break;
				default://Caso en que se escriban opciones invalidas
							printf("Ingresar una opci%cn v%clida\n",162, 160);
				break;
			}


			

		}while(O != 4);
		
	return 0;//Regresa el valor de 0 que por convención es una ejecución sin errores
	}

void menu() //Función que despliega los tipos de empleados
	{
		printf("\n\n\nSELECCIONE EL TIPO DE EMPLEADO\n");//Instrucción al usuario
		//Despliegue de tipo de usuario
		printf("\n1) Empleado del %crea de ventas\n",160);
		printf("2) Empleado del %crea de compras\n",160);
		printf("3) Administrador\n");
		printf("4) Salir del sistema\n");
	}
