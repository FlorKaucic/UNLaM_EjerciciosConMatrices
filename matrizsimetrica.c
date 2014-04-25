#include "matrizsimetrica.h"

int es_matriz_simetrica(int m[COL][COL])
{
    int i, j;
    for(i=0;i<(COL-1);i++)
        for(j=i+1;j<COL;j++)
            if(m[i][j]!=m[j][i])
                return 0;
    return 1;
}
