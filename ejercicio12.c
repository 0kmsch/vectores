//12) Dados los vectores del ejercicio anterior, imprima todas las combinaciones.
// Por ejemplo: 1ro de A con 1ro de B, 1ro de A con 2do de B, 1ro de A con 3ro de B.... 
// 2do de A con 1ro de B, 2do de A con 2do de B... etc.

#include <stdio.h>

int main(){
    int A[3] = {1, 2, 3}, B[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, j;
    for(j=0;j<=2;j++){
        for(i=0;i<=9;i++){
            printf("%d, %d\n",A[j], B[i]);
        }
    }
}