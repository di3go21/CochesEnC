/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: diego
 *
 * Created on 15 de enero de 2020, 9:35
 */

#include <stdio.h>
#include <stdlib.h>
#include "Interfaz.h"
#include "Coche.h"
/*
 * 
 */

#define CAPACIDAD 50
#define PISOS 2

int main(int argc, char** argv) {

    Coche * parquing[PISOS][CAPACIDAD];
    int opc = 0;
    int a, b,aux;
    int posicion;
    char matriculaborrar[10];

    for (int i = 0; i < PISOS; i++)
        for (int j = 0; j < CAPACIDAD; j++)
            parquing[i][j] = NULL;
    ;

    do {
        opc = menu();

        printf("Has elegido el maravilloso el %d \n", opc);

        switch (opc) {

            case ENTRADA:

                a = 0;
                b = 0;
                while (((parquing[a][b]->matricula) != NULL) && a < 2) {
                    b++;
                    if (b == 50) {
                        a++;
                        b = 0;
                    }

                }
                printf("BUSCANDO PLAZA:::::::::::::\n");
                if (a > 1)
                    printf("parquing lleno!!\n");
                else {
                    parquing[a][b] = nuevoCoche();
                    leerCoche(parquing[a][b]);
                    printf("Ha sido aparcado en la plaza %d de la planta %d !\n", b, a);
                }


                break;

            case SALIDA:

                printf("dime la matricula del coche que ha salido:\n");
                scanf("%s", matriculaborrar);
                aux=0;
                for (int i = 0; i < PISOS; i++){
                    
                    for (int j = 0; j < CAPACIDAD; j++) {
                        if (parquing[i][j]->matricula != NULL){
                                if (strcmp(parquing[i][j]->matricula, matriculaborrar) == 0) {
                                    //  free(parquing[i][j]);                             HACE FLATA PROFE?¿?¿¿?
                                    parquing[i][j] = NULL;
                                            printf("se liberó la plaza %d de la planta %d !\n", j, i);
                                            i = 3;
                                            j = 51;
                                }
                                else
                                    aux++;
                            }
                        else
                            aux++;                                                                  //no se me HA OCURRIDO OTRA FORMA
                    }
                }
                if (aux==100)
                    printf("No se ha encontrado esa matricula inténtelo otra vez!\n");


                //strcpy(matriculaborrar, scanf(%s));
                //    scanf(%s,);

                // char aborrar[];


                break;

            case VERPARQUING:
                for (int i = 0; i < PISOS; i++) {
                    for (int j = 0; j < CAPACIDAD; j++) {

                        printf("plaza %d de la planta %d: ", j, i);
                                printf("%s \n", parquing[i][j]->matricula);

                    }
                };

                break;
            case NUMPLAZASLIBRES:
                aux=0;
                    for (int i = 0; i < PISOS; i++)
                    
                    for (int j = 0; j < CAPACIDAD; j++) 
                        if (parquing[i][j]->matricula == NULL)
                            aux++;
                    printf("Hay %d plazas libres!\n",aux);



                break;
            case NUMPLAZASOCUPADAS:
aux=0;
                    for (int i = 0; i < PISOS; i++)
                    
                    for (int j = 0; j < CAPACIDAD; j++) 
                        if (parquing[i][j]->matricula != NULL)
                            aux++;
                    printf("Hay %d plazas ocupadas!\n",aux);



                break;

            case SALIR:


                printf("Hasta la vista, baby\n");
                
                //escribirCoche(*parquing[0][0]);
                break;
            default:

                printf("Opcion no valida\n");

        }//final del switch
    }

      while (opc != 0);


    }

int plazaLibre(Coche c) {
    int estado = 0;

    if (c.matricula == NULL)
            estado++;

        return estado;
    }
