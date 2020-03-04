#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
				/// ALOCAREA DINAMICA A MEMORIEI. ///
#define tip char
tip *vPtr, *vPtr1;

int main()
{
	vPtr = (tip *) malloc(sizeof(tip)); //aloc memorie celor doua variabile de tip pointer
	vPtr1 = (tip *) malloc(sizeof(tip));

	printf("%p\n", vPtr);
	printf("%p\n", vPtr1);
	printf("%p\n", vPtr1 + 1);

	printf("%d\n", vPtr1-vPtr);

	system("pause");
	return 0;
}