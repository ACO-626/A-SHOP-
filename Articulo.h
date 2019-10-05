//#ifndef ARTICULO_H
//#define ARTICULO_H
#define MAX 20
#define car 30


typedef struct
 {
 	int clave;
 	char *art;
 	float precio;
 	float precioSurtir;
 	int ventas;

 } Articulo;
 typedef struct{
    Articulo *articulo;
    int indice;
} estructArt;


typedef struct{
    char *categoria;
    int codigoSeccion;
   Articulo *producto;
   //Empleado *empleados;
}Departamento;

 typedef struct{
    Departamento *departamento;
    int indice;
} estructDepto;



int buscarpro(estructArt *x);///////////////////
void  listaruno(int i,estructArt *x);
estructArt *crearProducto();
//void crearArticulo(Articulo *articulo);//////////////
void inicializarIndice(estructArt *x);
int menu(char texto[], int x);
void insertar(estructArt *x);///////////////////
int validarEspacio(estructArt *x);
void listar(estructArt *x);///////////////
void actualizar(int casilla, estructArt *x);/////////////////
void borrar(estructArt *x);//////////////////
void liberar(estructArt *x);
void lecturaArchivo(char path[]);
void crearEtiqueta(int totalarticulos, float total);



int buscarDepto(estructDepto *x);///////////////////
void  listarunoD(int i,estructDepto *x);
estructDepto *crearDepartamento();
//void crearDepartamento(Departamento *departamento);//////////////
void inicializarIndiceD(estructDepto *x);
void insertarD(estructDepto *x);///////////////////
int validarEspacioD(estructDepto *x);
void listarD(estructDepto *x);///////////////
void actualizarD(int casilla, estructDepto *x);/////////////////
void borrarD(estructDepto *x);//////////////////
void liberarD(estructDepto *x);

//#endif // ARTICULO_H
