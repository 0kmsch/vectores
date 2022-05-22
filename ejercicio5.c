/*5) El usuario ingresa 5 edades (enteras) y 5 sueldos (float), correspondientes
a 5 personas. Muestre en pantalla los vectores con los valores ingresados. 
Muestre en qué posición se encuentra la persona de más edad y en qué posición 
se encuentra el mayor sueldo.
5b) Agregue al punto anterior un mensaje que diga si la persona más grande
es también la que más gana, o no.
*/

#include <stdio.h>

int main(){
    int i;
    int A[5];
    float B[5];
    float tempVal[2] = {0, 0};
    int tempPos[2] = {0, 0};
    for(i=0; i<=4; i++){
        printf("Indique la edad del sujeto %d\n", i+1);
        scanf("%d", &A[i]);
        printf("Indique el sueldo del sujeto %d\n", i+1);
        scanf("%f", &B[i]);
        if(A[i]>=tempVal[0]){
            tempPos[0] = i;
            tempVal[0] = A[i];
        }
        if(B[i]>=tempVal[1]){
            tempPos[1] = i;
            tempVal[1] = B[i];
        }
    }
    printf("Edad\tSueldo\n");
    for(i=0; i<=4; i++){
        printf("%d\t$%.3f\n", A[i], B[i]);
    }
    printf("\nMayor edad: Sujeto %d\tMayor sueldo: Sujeto %d\n", tempPos[0], tempPos[1]);
    if(tempPos[0]==tempPos[1]){
        printf("El sujeto mayor es el que m%cs cobra.\n\n", 160);
    }
}

