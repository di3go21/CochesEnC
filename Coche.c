/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include"Coche.h"

void leerCoche(Coche *c){// si MANDAMOS PUNTERO SE CREA UNA COPIA, SI MANDAMOS *C TRABAJAMOS DIRECRAMENTE CON EL COCHE QUE LE MANDAMOS
    
    printf("Introduce la matrícula del coche:");
    scanf("%s",(*c).matricula);
    printf("1.- Pequeño\n2.- Mediano\n3.- Grande\n");
    printf("Tamaño: ");
    scanf("%d",&(c->tamanio));
    
    //leerplaza
}
                         

void escribirCoche(Coche c){
    char tamanio2[10];
    
    int RELLENARPLAZA=0;
    switch (c.tamanio){
        case 0:
            strcpy(tamanio2, "pequeño");
            break;
        case 1:
            strcpy(tamanio2, "mediano");
            break;
        case 2:
            strcpy(tamanio2, "grande");
            break;
            
        default:
            break;
            
    }
    
    printf("Matricula: %s Tamaño: %s plaza: %d", c.matricula, tamanio2, RELLENARPLAZA);
   // return tamanio2;
    //FALTA RELLENAR LA PLAZA
    
}

Coche* nuevoCochedos(char *matriculados, int tamaniodos){
    
    Coche *c=malloc(sizeof(Coche));
    // *(c->matricula) = matriculados;
     strcpy(c->matricula, matriculados);//dtrcoy porque es un arra de char
     c->tamanio = matriculados;
}

Coche* nuevoCoche(){
    Coche *c;
    c=malloc(sizeof(Coche));
   
    
    return c;    
}

loco(){
    printf("jejejej");
}

