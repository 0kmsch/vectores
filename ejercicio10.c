/*10) Se cuenta con dos vectores de 8 enteros cada uno. Estos vectores tienen DNIs
de jugadores de tenis. Se pide ingresar los datos y mostrar en pantalla las
parejas, armadas así: el primero de un vector con el último del otro, el segundo
con el anteúltimo, etc.*/

#include<stdio.h>

int main(){
    int vector1[8], vector2[8], i, j;

    printf("Ingrese los DNI: ");

    for(i=0 ; i<=7 ; i++){
        scanf("%d", &vector1[i]);
        scanf("%d", &vector2[i]);
    }

    printf("Las parejas quedaron armadas asi: \n");

    for(j=0 ; j<=7 ; j++){
        printf("%d con %d\n",vector1[j], vector2[7-j]);
    }
}