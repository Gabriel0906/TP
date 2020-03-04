#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
			///	VARIABILE DE TIP PINTER. DEREFERENTIERE.///
int v = 9;
int *vPtr; // * -> operator de indirectare

int main()
{
	printf("%p\n", vPtr); // %p -> specificator de formatare adresa de memorie

	vPtr = &v; //initializare variabila pointer

	printf("%d\n", *vPtr); /* *vPtr -> valoarea stocata la adresa de memorie spre care pointeaza vPtr
							  * -> operator de dereferentiere */
	printf("%p\n", vPtr);
	printf("%p\n", &v); /* &v -> adresa de memorie la care este stocata valoarea variabilei v
						   & -> operator de adresare */


	system("pause");
	return 0;
}