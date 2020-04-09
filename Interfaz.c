/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Interfaz.h"

int menu(){
    
    int opcion=0;     

      printf("Menu de opciones:\n");
      printf("%d.- Introducir coche entrante\n",ENTRADA);
      printf("%d.- Borrar coche que abandona\n",SALIDA);
      printf("%d.- Mostrar el parquing\n",VERPARQUING);
      printf("%d.- Ver cuantas plazas libres quedan\n",NUMPLAZASLIBRES);
      printf("%d.- ver cuantas plazas ocupadas tenemos\n",NUMPLAZASOCUPADAS);
      printf("%d.- Salir\n",SALIR);
      printf("Que desea hacer:");
      scanf("%d",&opcion);
    
    
    
    return opcion;
};