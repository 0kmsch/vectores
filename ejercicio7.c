/*7) El usuario ingresa datos de 5 microprocesadores. Se cuenta con su precio
(float) y su velocidad en gigahertz (float). Mostrar en pantalla si el
microprocesador más caro es también el más rápido, o no.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float precio[5];
    float velocidad[5]; 
    int i, j, l, verificar = 0;
    
    int masCaro = 0;    
    int maxVel = 0;
    int indiceMasCaro;
    int indiceMaxVel;
    
    for(i=0 ; i<=4 ; i++){
        printf("Ingrese el precio del microprocesador %d: ",i + 1);
        scanf("%f", &precio[i]);
        printf("Ingrese la velocidad del microprocesador %d: ", i + 1);
        scanf("%f", &velocidad[i]);
        printf("%.2fghz, $%.2f \n", velocidad[i], precio[i]);
        if(precio[i] > masCaro){
            masCaro = precio[i];
            indiceMasCaro = i;
        }
        if(velocidad[i] > maxVel){
            maxVel = velocidad[i];
            indiceMaxVel = i;
        }
    }
    /*
    printf("%d",masCaro);
    printf("%d",maxVel);
    */
        
        if(indiceMasCaro == indiceMaxVel){
            printf("El mas caro es ademas, el mas rapido");
        } else{
            printf("El mas caro NO es el mas rapido");
        }
    
    // Primer caso (Funciona)    
    // input: [200,30,10] y [4,2,1]
    // output: "El mas caro es ademas, el mas rapido"
    
    // Segundo caso (Funciona)    
    // input: [200,30,10] y [4,5,1]
    // output: "El mas caro NO es el mas rapido"
  
    
    
    
    
    /*for(l=0 ; l<=4 ; l++){
        for(j=0 ; j<=4 ; j++){
            printf("%d \n \t %d \n",l, j);
            if(precio[j] > precio[l] && velocidad[j] > velocidad[l]){
                verificar = 1;
                printf("hola \n");
        }
    }
    }

    if(verificar == 0){
            printf("El microprocesador mas caro NO es el mas rapido.");
        }
    else{
        printf("El microprocesador mas caro es el mas rapido.");
    }
        */
}