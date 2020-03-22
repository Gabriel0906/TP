#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int *a, *b, *p;
	a = (int*)malloc(sizeof(int));
	printf("a= ",a);
	scanf("%d", &a);
	b = (int*)malloc(sizeof(int));
	printf("b= ",b);
	scanf("%d", &b);
	p = a;
	a = b;
	b = p;
	printf("a= \t b= \n", *a, *b);
	free(a);
	free(b);

	system("pause");
	return 0;
}