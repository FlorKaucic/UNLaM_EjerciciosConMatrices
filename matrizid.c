#include "matrizid.h"

// Esta es solo para traer las funciones que puse en comment desde el otro archivo
#include "matrizdiag.h"



int es_matriz_id(int m[COL][COL])
{
    return (son_segmentos_cero(m)&&es_diagonal_uno(m));
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

La pongo como comment porque esta tambien en matrizdiag.c del Ej31

int son_segmentos_cero(int m[COL][COL])
{
    int i, j;
    for(i=1;i<COL;i++)
        for(j=0;j<i;j++)
            if(m[i][j]!=0||m[j][i]!=0)
                return 0;
    return 1;
}


*/
