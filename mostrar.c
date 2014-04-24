#include "mostrar.h"

void mostrar_diag_ppal(int m[COL][COL])
{
    int i;
    printf("\n\nDiagonal principal:");
    for(i=0;i<COL;i++)
        printf("\nPosicion (%d,%d): %d",i,i,m[i][i]);
}

void mostrar_diag_sec(int m[COL][COL])
{
    int i;
    printf("\n\nDiagonal secundaria:");
    for(i=0;i<COL;i++)
        printf("\nPosicion (%d,%d): %d",i,(COL-1-i),m[i][COL-1-i]);
}

void mostrar_t1(int m[COL][COL])
{
    int i=0, j;
    printf("\n\nT1 (Triangulo superior):");
    while(i<(COL-1-i))
    {
        for(j=i+1;j<(COL-1-i);j++)
            printf("\nPosicion (%d,%d): %d",i,j,m[i][j]);
        i++;
    }
}

void mostrar_t2(int m[COL][COL])
{
    int i=0, j;
    printf("\n\nT2 (Triangulo izquierdo):");
    while(i<(COL-1-i))
    {
        for(j=i+1;j<(COL-1-i);j++)
            printf("\nPosicion (%d,%d): %d",j,i,m[j][i]);
        i++;
    }
}

void mostrar_t3(int m[COL][COL])
{
    int i=COL-1, j;
    printf("\n\nT3 (Triangulo inferior):");
    while((COL-1-i)<i)
    {
        for(j=(COL-i);j<i;j++)
            printf("\nPosicion (%d,%d): %d",i,j,m[i][j]);
        i--;
    }
}

void mostrar_t4(int m[COL][COL])
{
    int i=COL-1, j;
    printf("\n\nT4 (Triangulo derecho):");
    while((COL-1-i)<i)
    {
        for(j=(COL-i);j<i;j++)
            printf("\nPosicion (%d,%d): %d",j,i,m[j][i]);
        i--;
    }
}

void mostrar_seg_inf(int m[COL][COL])
{
    int i, j;
    printf("\n\nSegmento inferior:");
    for(i=1;i<COL;i++)
        for(j=0;j<i;j++)
            printf("\nPosicion (%d,%d): %d",i,j,m[i][j]);
}

void mostrar_seg_sup(int m[COL][COL])
{
    int i, j;
    printf("\n\nSegmento superior:");
    for(i=0;i<(COL-1);i++)
        for(j=i+1;j<COL;j++)
            printf("\nPosicion (%d,%d): %d",i,j,m[i][j]);
}
