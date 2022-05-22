/* 
) En dos vectores se tienen los goles de dos equipos en diferentes partidos que 
tuvieron entre si. En la posición 0 del vector equipoA están los goles de un partido
por ese equipo y en la misma posición del vector equipoB están los goles del otro
equipo en ese mismo partido. En la posición 1 de ambos vectores
tendremos los goles para otro partido, etc. Se pide permitir que el usuario cargue
los datos y mostrar cuántos empates han ocurrido.
*/

#include <stdio.h>
int main(){
    int auxA, auxB, count, i;
    int A[10];
    int B[10];
    for(i=0; i<=9; i++){
        printf("Goles equipo A partido %d\n", i);
        scanf("%d", &A[i]);
        printf("Goles equipo B partido %d\n", i);
        scanf("%d", &B[i]);
        if(A[i] == B[i]){
            count++;
        }
        if(A[i] > B[i]){
            auxA++;
        }
        if(B[i] > A[i]){
            auxB++;
        }
    }
    printf("Han ocurrido %d empates \n", count);
    if(auxA > auxB){
        printf("El equipo A es el ganador");
    }
    if(auxB > auxA){
        printf("El equipo B es el ganador");
    }
    if(auxA == auxB){
        printf("Ningun equipo gana, empate.");
    }
}