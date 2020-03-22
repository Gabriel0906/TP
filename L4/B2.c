
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void citire(int *v, int *n)
{
	int *i;
	for(i = v; i < v + *n; i++)
		scanf("%d", i);
}

void suma(int *v, int *n)
{
	int s = 0, *i;
	for (i = v; i < v + *n; i++)
		s = s + *i;
	printf("Suma numerelor este: %d\n", s);
}

int main()
{
	int *v, n;

	printf("n=");
	scanf("%d", &n);
	v = (int*)malloc(n * sizeof(int));

	citire(v, &n);
	suma(v, &n);

	system("pause");
	return 0;
}