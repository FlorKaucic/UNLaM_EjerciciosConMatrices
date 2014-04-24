#include "matrizdiag.h"

int es_matriz_diagonal(int m[COL][COL])
{
    return (es_seg_inf_cero(m)&&es_seg_sup_cero(m)&&(!es_diagonal_numero(m,0)));
}

int es_seg_inf_cero(int m[COL][COL])
{
    int i, j;
    for(i=1;i<COL;i++)
        for(j=0;j<i;j++)
            if(m[i][j]!=0)
                return 0;
    return 1;
}

int es_seg_sup_cero(int m[COL][COL])
{
    int i, j;
    for(i=0;i<(COL-1);i++)
        for(j=i+1;j<COL;j++)
            if(m[i][j]!=0)
                return 0;
    return 1;
}

int es_diagonal_numero(int m[COL][COL], int nro)
{
    int i;
    for(i=0;i<COL;i++)
        if(m[i][i]==nro)
            return 1;
    return 0;
}
