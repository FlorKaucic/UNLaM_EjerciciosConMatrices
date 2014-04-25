#include "trasponermatriz.h"

void trasponer_matriz(int m[COL][COL])
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
