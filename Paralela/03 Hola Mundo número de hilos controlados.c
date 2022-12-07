#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * Ejercicio
 */
int main(int argc, char *argv[]) {

	printf("\n 01 Fuera de la region Paralela ... \n\n");
	int id, nt;

	/* Creación de hilos  */
	#pragma omp parallel num_threads(7)
        {
        printf("\n Numero de hilos controlados");
        }

	printf("\n\n 02 Fuera de la region Paralela ...\n\n");

	return 0;
}

