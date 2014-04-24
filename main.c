#include <stdio.h>

#include "mostrar.h"
#include "sumar.h"
#include "matrizdiag.h"

#define COL 5

int main()
{
    int mat[COL][COL]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    int mat2[COL][COL]={{1,0,0,0,0},{0,7,0,0,0},{0,0,13,0,0},{0,0,0,19,0},{0,0,0,0,25}};

    mostrar_diag_ppal(mat);
    mostrar_diag_sec(mat);
    mostrar_t1(mat);
    mostrar_t2(mat);
    mostrar_t3(mat);
    mostrar_t4(mat);
    mostrar_seg_inf(mat);
    mostrar_seg_sup(mat);

    printf("\n\n\nSuma de diagonal principal: %d",sumar_diag_ppal(mat));
    printf("\nSuma de diagonal secundaria: %d",sumar_diag_sec(mat));
    printf("\nSuma de triangulo superior: %d",sumar_t1(mat));
    printf("\nSuma de triangulo izquierdo: %d",sumar_t2(mat));
    printf("\nSuma de triangulo inferior: %d",sumar_t3(mat));
    printf("\nSuma de triangulo derecho: %d",sumar_t4(mat));
    printf("\nSuma de segmento inferior: %d",sumar_seg_inf(mat));
    printf("\nSuma de segmento superior: %d",sumar_seg_sup(mat));

    printf("\n\nMat:");
    if(es_matriz_diagonal(mat))
        printf("\nEs matriz diagonal.");
    else
        printf("\nNO es matriz diagonal.");

    printf("\n\nMat2:");
    if(es_matriz_diagonal(mat2))
        printf("\nEs matriz diagonal.");
    else
        printf("\nNO es matriz diagonal.");
    return 0;
}
