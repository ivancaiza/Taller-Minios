#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcion;

    while (1) {
        printf("\n--- SIMULADOR DE SISTEMA OPERATIVO ---\n");
        printf("GESTION DE MEMORIA SECUNDARIA (CRUD):\n");
        printf("1. Create\n");
        printf("2. Read\n");
        printf("3. Update\n");
        printf("4. Delete\n");
        printf("GESTION DE PROCESOS:\n");
        printf("5. Iniciar Reto BSDGames\n");
        printf("CONTROL DEL SISTEMA:\n");
        printf("6. Apagar Sistema\n");
        printf("Seleccione una opcion: ");

        if (scanf("%d", &opcion) != 1) {
            printf("Entrada invalida. Por favor, ingrese un numero.\n");
            while(getchar() != '\n'); // Limpiar buffer
            continue;
        }

        switch (opcion) {
            case 1: printf("\nEjecutando Create...\n"); break;
            case 2: printf("\nEjecutando Read...\n"); break;
            case 3: printf("\nEjecutando Update...\n"); break;
            case 4: printf("\nEjecutando Delete...\n"); break;
            case 5: printf("\nEjecutando Reto BSDGames...\n"); break;
            case 6: 
                printf("\nApagando sistema... Adios.\n"); 
                exit(0);
            default: printf("\nOpcion no valida, intente de nuevo.\n");
        }
    }
    return 0;
}

