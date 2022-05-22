/*6) El usuario ingresa el DNI (entero) de 10 estudiantes y su calificaci�n (float).
Muestre en pantalla el DNI de los estudiantes que aprobaron.*/

#include <stdio.h>

int main(){
int i;
long A[10];
float B[10];
for(i=0; i<=9; i++){
    printf("Indique el DNI del alumno N%c%d\n", 167, i+1);
    scanf("%d", &A[i]);
    printf("Indique la calificaci%cn del alumno N%c%d\n", 162, 167, i+1);
    scanf("%f", &B[i]);
}
printf("DNI\t\tNota\n\n");

for(i=0; i<=9; i++){
    if(B[i]>=6){
        printf("%d\t%.2f\n", A[i], B[i]);
        }
    }
}
