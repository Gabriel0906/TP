#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
					/// Operatii cu pointeri. Exemplificare. ///
int v = 9;
int *vPtr, *vPtr1;

int main()
{
	vPtr = &v;
	*vPtr = *vPtr + 5;
	printf("%d\n", *vPtr);
	(*vPtr)++;
	printf("%d\n", *vPtr);

	vPtr1 = vPtr;
	(*vPtr)++;
	printf("%d\n", *vPtr1);
	
	printf("%p\n", vPtr);
	printf("%p\n", vPtr1);

	system("pause");
	return 0;
}