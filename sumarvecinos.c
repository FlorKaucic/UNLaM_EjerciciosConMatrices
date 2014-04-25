#include "sumarvecinos.h"

int sumar_vecinos(int m[FIL][COL], int i, int j)
{
    if(i<0||i>=FIL||j<0||j>=COL)
        return 0;
    int suma=0,k,l;
    for(k=(i-1);k<=(i+1);k++)
        for(l=(j-1);l<=(j+1);l++)
            if(k>=0&&k<FIL&&l>=0&&l<COL&&!(k==i&l==j))
                suma+=m[k][l];
    return suma;
}
