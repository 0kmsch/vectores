/*3) Permita el ingreso de 5 flotantes. Muestre el vector en pantalla. 
Luego multiplique todos los valores por 1.65 y vuelva a mostrarlos.
*/

#include <stdio.h>

int main(){
    int i;
    float A[5];
    float B[5];
    for(i=0; i<=4; i++){
        printf("Ingrese la propiedad %d\n", i);
        scanf("%f", &A[i]);
        B[i] = A[i]*1.65;
    }
    printf("%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", A[0], A[1], A[2], A[3], A[4]);
    printf("%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t", B[0], B[1], B[2], B[3], B[4]);

}
