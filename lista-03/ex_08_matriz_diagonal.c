#include <stdio.h>
#include <stdlib.h>
#define ROW 4
#define COL 4

void diagonal(float ** M, int n, int m){
// Zera as posições da matriz M, exceto da diagonal principal
    for(int i=0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i != j){
                M[i][j] = 0;
            }
        }
    }
}

void imprime_matriz(int l, int c, float **M){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("%.0f ", M[i][j]);
        }
        puts("");
    }
}

int main(){
    float l0[] = {1,2,3,4};
    float l1[] = {5,6,7,8};
    float l2[] = {9,10,11,12};
    float l3[] = {13,14,15,16};
    
    int n = ROW;
    int m = COL;
    float ** M = malloc(n * sizeof(float *));
    for(int i = 0; i < n ; i ++){
        M[i] = malloc(m * sizeof(float));
    }

    M[0] = l0;
    M[1] = l1;
    M[2] = l2;
    M[3] = l3;

    diagonal(M, n, m);
    imprime_matriz(ROW, COL, M);

}