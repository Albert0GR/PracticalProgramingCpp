/*Programa que gestione un arreglo de 5 productos de la tienda*/

#include <stdio.h>
struct producto
{
  int numProducto;
  char nombre[20];
  char desc[50];
  float costo;
  float precio;
  int descuento;
  int cantidad;

};

struct pedido
{
  int numCliente;
  char nombre[20];
  int numProducto;
  int cantidad;
  float total;

};
int main ()
{

  printf ("Productos de la tienda");

  struct producto productos[5];
  struct pedido daniel;

  scanf ("%d", &productos[0].numProducto);
  scanf ("%f", &productos[0].costo);
  scanf ("%f", &productos[0].precio);
  scanf ("%d", &productos[0].descuento);
  scanf ("%s", &productos[0].nombre[0]);

  printf ("# Producto: %d\n", productos[0].numProducto);
  printf ("Nombre: %s\n", productos[0].nombre);
  printf ("Costo: $ %8.2f \n", productos[0].costo);
  printf ("Precio: $ %8.2f \n", productos[0].precio);
  printf ("Descuento $ %d\n", productos[0].descuento);

/*datos del pedido*/
  scanf ("%d", &daniel.numCliente);
  scanf ("%d", &daniel.numProducto);
  scanf ("%d", &daniel.cantidad);
  scanf ("%s", &daniel.nombre[0]);

 
  
  printf ("# Cliente: %d\n", daniel.numCliente);
  printf ("Nombre: %s\n", daniel.nombre);
  printf ("# Producto: %d\n", daniel.numProducto);
  printf ("Cantidad: %d\n", daniel.cantidad);
  daniel.total = daniel.cantidad * productos[0].precio;
  printf ("Total: $ %0.2f\n", daniel.total);
  return 0;
}