#include "matrizdiag.h"

int es_matriz_diagonal(int m[COL][COL])
{
    return (son_segmentos_cero(m)&&diagonal_no_tiene_ceros(m));
}

int son_segmentos_cero(int m[COL][COL])
{
    int i, j;
    for(i=1;i<COL;i++)
        for(j=0;j<i;j++)
            if(m[i][j]!=0||m[j][i]!=0)
                return 0;
    return 1;
}

int diagonal_no_tiene_ceros(int m[COL][COL])
{
    int i;
    for(i=0;i<COL;i++)
        if(m[i][i]==0)
            return 0;
    return 1;
}
