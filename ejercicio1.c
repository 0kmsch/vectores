/*1) Permita el ingreso de 5 números enteros y guárdelos en un vector.
Muestre el vector en pantalla, al derecho y al revés.*/

#include <stdio.h>

int main(){
    int A[5], i;
for(i=0; i<=4; i++){
    printf("Inserte el valor %d\n", i);
    scanf("%d", &A[i]);
}
printf("\n");
printf("%d\t%d\t%d\t%d\t%d", A[0], A[1], A[2], A[3], A[4]);
printf("\n");
printf("%d\t%d\t%d\t%d\t%d", A[4], A[3], A[2], A[1], A[0]);
}
