#include <stdio.h>
#include "Lecturas.h"
#include "Operaciones.h"


int main() {
    printf("\n");
    printf("     Bienvenido a RuralEduInvent    \n");

    char nombres[MAX_EQUIPOS][MAX_NOMBRE];
    int cantidades[MAX_EQUIPOS],cantidadesBueno[MAX_EQUIPOS],cantidadesMalo[MAX_EQUIPOS],cantidadesNecesarias[MAX_EQUIPOS];
    float precios[MAX_EQUIPOS];
    int numEquipos = 0;
    int opcion;

    do {
        opcion = mostrarMenu();

        switch(opcion) {
            case 1:
                agregarEquipo(nombres, cantidades, cantidadesBueno, cantidadesMalo, cantidadesNecesarias, precios, &numEquipos);
                break;
            case 2:
                mostrarInventario(nombres, cantidades, cantidadesBueno, cantidadesMalo, cantidadesNecesarias, precios, numEquipos);
                break;
            case 3:
                calcularInversionTotal(nombres, cantidadesMalo, cantidadesNecesarias, precios, numEquipos); 
                break;
            case 4:
                printf("Gracias por usar el programa\n");
                break;
            default:
                printf("Ingreso mal su dato \n");
        }
    } while(opcion != 4);

    return 0;
}
