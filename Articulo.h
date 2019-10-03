#ifndef ARTICULO_H
#define ARTICULO_H
typedef struct{
    float costoCompra;
    float costoVenta;
    char *nombre;
    int codigo;
}Articulo;


Articulo crearArticulo();

Articulo crearArticulo()
{
    Articulo prod;
    char *nom=(char*)malloc(sizeof(char));
    int clav;
    float priceVenta;
    float priceCompra;

    printf("\nIntroduce el nombre del producto");
    scanf("%s", nom);

    prod.nombre=nom;

    printf("\nIntroduce la clave del producto");
    scanf("%d", &clav);

    prod.codigo=clav;

    printf("\nIntroduce el precio del producto para vender");
    scanf("%f", &priceVenta);

    prod.costoVenta=priceVenta;

    printf("\nIntroduce el precio del producto para comprar");
    scanf("%f", &priceCompra);

    prod.costoCompra=priceCompra;

    return prod;
}


#endif // ARTICULO_H

