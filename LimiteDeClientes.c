#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) 
{
	//Se guardan las constantes
	//Del porcentaje limite y la capacidad total máxima de clientes
	//Para que las operaciones se procesen de manera correcta se tienen que generar las constantes como flotante
    const float limiteClPor = 75, capacidadCl = 60;
    
    //Se declaran las variables que usaremos
    //Los números de clientes que ingresaron y si se va a ejecutar nuevamente el programa
	int numeroCl;
	bool capturaCl; //1 para si(verdadero) y 0 para no (falso)
	
	//do while se ejecuta al menos una vez el programa
	do
	{
		//Capturar los clientes que ingresaron
        printf("%cCu%cl es el n%cmero de clientes que ingresaron?\t", 168, 160, 163);
		scanf("%d",&numeroCl);

		//Valida si se alcanzó la mitad del aforo máximo
		if (numeroCl >= (capacidadCl/2))
            printf("Se ha alcanzado la mitad del aforo m%cximo\n", 160);

		//Valida si se alcanzo el límite del 75%
		if (numeroCl <= ((capacidadCl/100)*limiteClPor))
            printf("Disponibilidad de acceso a clientes\n");
		else
            printf("Se alcanz%c el l%cmite\n", 162, 161);

		//Se solicita si se va a ejecutar de nuevo el programa
		//1 para si(verdadero) y 0 para no (falso)
		printf("%cDeseas capturar los clientes que ingresaron nuevamente?\t", 168);
		scanf("%d",&capturaCl);
	}
	while (capturaCl);//Si es verdadero se ejecuta de nuevo el ciclo de lo contrario se termina.
	
	printf("Eduardo Dami%cn Ram%crez Paniagua\n", 160,161);
	printf("ES231103942\n");
	
	system("pause");	
	return 0;
}
