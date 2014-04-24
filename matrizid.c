#include "matrizid.h"

// Esta es solo para traer las funciones que puse en comment desde el otro archivo
#include "matrizdiag.h"



int es_matriz_id(int m[COL][COL])
{
    return (es_seg_inf_cero(m)&&es_seg_sup_cero(m)&&es_diagonal_uno(m));
}

int es_diagonal_uno(int m[COL][COL])
{
    int i;
    for(i=0;i<COL;i++)
        if(m[i][i]!=1)
            return 0;
    return 1;
}

/*

Las pongo como comment porque estan tambien en matrizdiag.c del Ej31

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


*/
