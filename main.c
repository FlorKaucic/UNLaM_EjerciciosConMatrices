#include <stdio.h>

#include "mostrar.h"
#include "sumar.h"
#include "matrizdiag.h"
#include "matrizid.h"
#include "matrizsimetrica.h"
#include "trasponermatriz.h"

#define COL 5
#define FIL 3

int main()
{
    int mat1[COL][COL]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    int mat2[COL][COL]={{1,0,0,0,0},{0,7,0,0,0},{0,0,13,0,0},{0,0,0,19,0},{0,0,0,0,25}};
    int mat3[COL][COL]={{1,0,0,0,0},{0,1,0,0,0},{0,0,1,0,0},{0,0,0,1,0},{0,0,0,0,1}};
    int mat4[COL][COL]={{1,3,0,7,15},{3,11,12,7,0},{0,12,4,3,4},{7,7,3,0,6},{15,0,4,6,5}};
    int mat5[FIL][COL]={{4,2,0,-2,1},{1,-2,0,3,6},{1,2,-3,5,-1}};
    int mat6[COL][FIL];
    int mat7[FIL][FIL] = {0};

    mostrar_diag_ppal(mat1);
    mostrar_diag_sec(mat1);
    mostrar_t1(mat1);
    mostrar_t2(mat1);
    mostrar_t3(mat1);
    mostrar_t4(mat1);
    mostrar_seg_inf(mat1);
    mostrar_seg_sup(mat1);

    printf("\n\n\nSuma de diagonal principal: %d",sumar_diag_ppal(mat1));
    printf("\nSuma de diagonal secundaria: %d",sumar_diag_sec(mat1));
    printf("\nSuma de triangulo superior: %d",sumar_t1(mat1));
    printf("\nSuma de triangulo izquierdo: %d",sumar_t2(mat1));
    printf("\nSuma de triangulo inferior: %d",sumar_t3(mat1));
    printf("\nSuma de triangulo derecho: %d",sumar_t4(mat1));
    printf("\nSuma de segmento inferior: %d",sumar_seg_inf(mat1));
    printf("\nSuma de segmento superior: %d",sumar_seg_sup(mat1));

    printf("\n\nMat1:");
    if(es_matriz_id(mat1))
        printf("\nEs matriz identidad.\nEs matriz diagonal.\nEs matriz simetrica.");
    else
        if(es_matriz_diagonal(mat1))
            printf("\nNO es matriz identidad.\nEs matriz diagonal.\nEs matriz simetrica.");
        else
            if(es_matriz_simetrica(mat1))
                printf("\nNO es matriz identidad.\nNO es matriz diagonal.\nEs matriz simetrica.");
            else
                printf("\nNO es matriz identidad.\nNO es matriz diagonal.\nNO es matriz simetrica.");

    printf("\n\nMat2:");
    if(es_matriz_id(mat2))
        printf("\nEs matriz identidad.\nEs matriz diagonal.\nEs matriz simetrica.");
    else
        if(es_matriz_diagonal(mat2))
            printf("\nNO es matriz identidad.\nEs matriz diagonal.\nEs matriz simetrica.");
        else
            if(es_matriz_simetrica(mat2))
                printf("\nNO es matriz identidad.\nNO es matriz diagonal.\nEs matriz simetrica.");
            else
                printf("\nNO es matriz identidad.\nNO es matriz diagonal.\nNO es matriz simetrica.");

    printf("\n\nMat3:");
    if(es_matriz_id(mat3))
        printf("\nEs matriz identidad.\nEs matriz diagonal.\nEs matriz simetrica.");
    else
        if(es_matriz_diagonal(mat3))
            printf("\nNO es matriz identidad.\nEs matriz diagonal.\nEs matriz simetrica.");
        else
            if(es_matriz_simetrica(mat3))
                printf("\nNO es matriz identidad.\nNO es matriz diagonal.\nEs matriz simetrica.");
            else
                printf("\nNO es matriz identidad.\nNO es matriz diagonal.\nNO es matriz simetrica.");

    printf("\n\nMat4:");
    if(es_matriz_id(mat4))
        printf("\nEs matriz identidad.\nEs matriz diagonal.\nEs matriz simetrica.");
    else
        if(es_matriz_diagonal(mat4))
            printf("\nNO es matriz identidad.\nEs matriz diagonal.\nEs matriz simetrica.");
        else
            if(es_matriz_simetrica(mat4))
                printf("\nNO es matriz identidad.\nNO es matriz diagonal.\nEs matriz simetrica.");
            else
                printf("\nNO es matriz identidad.\nNO es matriz diagonal.\nNO es matriz simetrica.");

    printf("\n\nTrasponer una matriz cuadrada:\n\nOriginal:");
    mostrar_matriz_entera(mat1);
    trasponer_matriz_cuadrada(mat1);
    printf("\n\nTraspuesta:");
    mostrar_matriz_entera(mat1);

    printf("\n\nTrasponer una matriz no cuadrada:");
    mostrar_matrices_no_cuadradas(mat5,mat6);

    printf("\n\nMultiplicar matrices:");
    multiplicar_y_mostrar_matriz(mat5, mat6, mat7);

    return 0;
}
