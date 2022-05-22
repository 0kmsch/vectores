/* 14) Dado un vector de 8 floats, imprima en pantalla si todos sus elementos
son idénticos, o no.
*/

#include <stdio.h>

int main(){
    int i, j;
    float A[8] = {5.5, 5.5, 5.5, 5.5, 5.5, 5.5, 5.5, 5.5};
    int desiguales = 0;
    for(i=0; i<=7; i++){
        for(j=0; j<=7; j++){
            if(A[i]!=A[j]&&i!=j){
                printf("Los elementos no coinciden.");
                j=8;
                i=8;
                desiguales=1;
            }
        }
    if(i==7 && desiguales==0){
        printf("Los elementos son iguales.");
        }
    }
}

