#include "sumar.h"

int sumar_diag_ppal(int m[COL][COL])
{
    int i, suma=0;
    for(i=0;i<COL;i++)
        suma+=m[i][i];
    return suma;
}

int sumar_diag_sec(int m[COL][COL])
{
    int i, suma=0;
    for(i=0;i<COL;i++)
        suma+=m[i][COL-1-i];
    return suma;
}

int sumar_t1(int m[COL][COL])
{
    int i=0, j, suma=0;
    while(i<(COL-1-i))
    {
        for(j=i+1;j<(COL-1-i);j++)
            suma+=m[i][j];
        i++;
    }
    return suma;
}

int sumar_t2(int m[COL][COL])
{
    int i=0, j, suma=0;
    while(i<(COL-1-i))
    {
        for(j=i+1;j<(COL-1-i);j++)
            suma+=m[j][i];
        i++;
    }
    return suma;
}

int sumar_t3(int m[COL][COL])
{
    int i=COL-1, j, suma=0;
    while((COL-1-i)<i)
    {
        for(j=(COL-i);j<i;j++)
            suma+=m[i][j];
        i--;
    }
    return suma;
}

int sumar_t4(int m[COL][COL])
{
    int i=COL-1, j, suma=0;
    while((COL-1-i)<i)
    {
        for(j=(COL-i);j<i;j++)
            suma+=m[j][i];
        i--;
    }
    return suma;
}

int sumar_seg_inf(int m[COL][COL])
{
    int i, j, suma=0;
    for(i=1;i<COL;i++)
        for(j=0;j<i;j++)
            suma+=m[i][j];
    return suma;
}

int sumar_seg_sup(int m[COL][COL])
{
    int i, j, suma=0;
    for(i=0;i<(COL-1);i++)
        for(j=i+1;j<COL;j++)
            suma+=m[i][j];
    return suma;
}
