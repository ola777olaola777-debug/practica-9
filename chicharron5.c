#include <stdio.h>

int main()
{
  int Lista[10], elem=0;

  //validacion
  do
  {
    printf("Dame un numero entre 1 y 10 para indicar la longitud del arreglo: ");
    scanf("%i", &elem);
  } while (elem < 1 || elem < 10);
  for(int i=0; i < elem; i++)
  {
      printf("Da un numero entero para el elemento %i del arreglo: ", i+1);
      scanf("%i", &Lista[i]);
  }

  printf("Los valores de la lista son: ");

  for(int j = 0; j < elem; j++)
  {
    printf("%i", Lista[j]);
  }
  printf("\n\n");
  return 0;
}
