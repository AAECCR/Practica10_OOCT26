/******************************************************************************

Cortés Romero Alberto Emiliano

*******************************************************************************/
#include<stdio.h>
int main()
{
    
    int i,j, a[5][5];

    i=0;
    while(i<5) //representa al renglon del arreglo
    {
        j=0;
        while (j<5) // representa a la columna del arreglo
        {
           a[i][j]= i+j;
          printf("\t%d", a[i][j]);
          j++;
        }
        printf("\n");
        i++;
    }
    
    return 0;
} 



