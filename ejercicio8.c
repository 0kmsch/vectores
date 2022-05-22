/*8) Declare un vector de 10 enteros y carguelo con 1 y 0 alternativamente.
Es decir, en la primer posición un 1, en la segunda un 0, en la tercera un 1,
en la cuarta un 0... etc. Muestrelo en pantalla para verificar que quedó bien
cargado.*/

#include <stdio.h>

int main(){
    int i, vector[10];
    for(i=0 ; i<=9 ; i++){
        if(i%2 == 0 || i == 0){
            vector[i] = 1;
        }
        else{
            vector[i] = 0;
        }
        printf("%d\t", vector[i]);
    }
}