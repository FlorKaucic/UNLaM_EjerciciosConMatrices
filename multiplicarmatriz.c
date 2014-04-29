#include "multiplicarmatriz.h"

void multiplicar_y_mostrar_matriz(int m1[FIL][COL], int m2[COL][FIL], int mres[FIL][FIL])
{
    int i,j,k;
    for(i=0;i<FIL;i++)
    {
        printf("\n");
        for(j=0;j<FIL;j++)
        {
            for(k=0;k<COL;k++)
                mres[i][j]+=(m1[i][k]*m2[k][j]);
            //printf("%d\t",mres[i][j]);
            /* si la función calcula el producto de matrices NO DEBE mostrar el resultado
            */
        }
    }
}
