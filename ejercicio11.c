// 11) Dado un vector de enteros A con 3 posiciones y otro B de 10 posiciones, 
// indique si todos los elementos de A se encuentran al menos una vez en B, o no.

#include <stdio.h>

int main(){
    int A[3] = {111, 223, 22231};
    int B[10] = {5, 12, 44, 20, 22, 400, 19, 71, 41, 2};
    int i, j;
    int val = 0;
    
    for(j=0 ; j<=2 ; j++){
    for(i=0 ; i<=9 ; i++){
        if(A[j] == B[i]){
            val = 1;
        }
    }
    }
    
    if(val == 1){
        printf("Los elementos de A se encuentran al menos una vez en el vector B");
    }
    if(val == 0){
        printf("Los elementos de A no se encuentran en el vector B");
    }
}

