#include "trasponermatriz.h"

void trasponer_matriz_cuadrada(int m[COL][COL])
{
    int i, j, aux;
    for(i=0;i<(COL-1);i++)
        for(j=i+1;j<COL;j++)
        {
            aux=m[i][j];
            m[i][j]=m[j][i];
            m[j][i]=aux;
        }
}

void mostrar_matriz_entera(int m[COL][COL])
{
    int i, j;
    for(i=0;i<COL;i++){
        printf("\n");
        for(j=0;j<COL;j++)
            printf("%d\t",m[i][j]);
    }
}

void trasponer_matriz_no_cuadrada(int m[FIL][COL], int t[COL][FIL])
{
    int i, j, aux;
    for(i=0;i<FIL;i++)
        for(j=0;j<COL;j++)
            t[j][i]=m[i][j];
}

void mostrar_matrices_no_cuadradas(int m[FIL][COL], int t[COL][FIL])
{
    int i, j;
    printf("\n\nOriginal:");
    for(i=0;i<FIL;i++){
        printf("\n");
        for(j=0;j<COL;j++)
            printf("%d\t",m[i][j]);
    }
    trasponer_matriz_no_cuadrada(m,t);
    printf("\n\nTraspuesta:");
    for(i=0;i<COL;i++){
        printf("\n");
        for(j=0;j<FIL;j++)
            printf("%d\t",t[i][j]);
    }
}
