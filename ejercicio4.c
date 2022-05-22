/*4) Permita el ingreso de 10 enteros positivos. Recorra el vector y todo
número par que encuentre reemplaceló por cero. Muestre en pantalla el resultado.*/

#include <stdio.h>

int main(){
    int A[10];
    int i;
    for(i=0; i<=9; i++){
        printf("Indique la propiedad %d\n", i);
        scanf("%d", &A[i]);
        if(A[i]%2==0){
            A[i]=0;
        }
    }
    for(i=0; i<=9; i++){
        printf("%d\t", A[i]);
    }
}
