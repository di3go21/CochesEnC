/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Coche.h
 * Author: diego
 *
 * Created on 15 de enero de 2020, 9:53
 */

typedef struct{
    char matricula[10];
    int tamanio;
    
} Coche;

void leerCoche(Coche *p);
void escribirCoche(Coche c);
Coche* nuevoCoche();

Coche* nuevoCochedos(char *matriculados, int tamaniodos);

int compararMatricula(Coche c , char *matricula);

char *getMatricula (Coche c);

char* toStringCoche(Coche c);

void lcooo();



