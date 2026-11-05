/******************************************************************************

Cortés Romero Alberto Emiliano
matriz con validación de dimensiones y entrada de usuario, que imprime la entrada como una 
matriz
*******************************************************************************/
#include <stdio.h>
int main ()
{
 int lista[10][10]; // Se declara el arreglo multidimensional
 int i,j;
 int renglon,columna;
 
 printf("\nDa el número de renglones y columnas separados con coma, ");
 printf("cuyo valor no sea mayor a 10 ");
 scanf("%d,%d",&renglon,&columna);
 
    if(((renglon>=1) && (renglon<=10))&&((columna>=1) && (columna<=10))) //validacion para que ambos datos esten contenidos en [1,10]
 {
                    // Acceso a cada elemento del arreglo multidimensional usando for
         for (i= 0 ; i <= renglon-1 ; i++) //ajuste al numero de indice
 {
        for(j= 0 ; j <= columna-1 ; j++) // mayor=10, 10-1 = 9, que es el maximo para el arreglo, se "acopla" entrada y el indice del for 
 {
 printf("\nNúmero para el elemento [%d][%d] del arreglo ", i,j ); //un valor en una "caja" especifica en el momento especifico
 scanf("%d",&lista[i][j]);
 }
 }
 printf("\nLos valores dados son: \n");
                    // Acceso a cada elemento del arreglo multidimensional usando for
         for (i= 0 ; i <= renglon-1 ; i++)
 {
         for(j= 0 ; j <= columna-1 ; j++)
 {
 printf("%d ", lista[i][j]); //se imprimen los valores de la entrada anterior
 }
 printf("\n");
 }
    }
        else printf("Los valores dados no son válidos");
 printf("\n");
 return 0;
}
