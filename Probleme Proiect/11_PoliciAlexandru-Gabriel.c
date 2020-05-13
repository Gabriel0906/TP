#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int a, b, x, y, r, c;
	FILE *f, *g;
	f = fopen("in.txt", "rt");
	g = fopen("out.txt", "wt");

	if (f == NULL || g == NULL)
		printf("Fisierul nu s-a putut deschide!\n");
	else
	{
		fscanf(f, "%d%d", &a, &b);
		x = a;
		y = b;
		while (b != 0)   /*Am folosit algoritmul lui Euclid pentru a calcula cmmdc-ul dintre
						 numerele a si b, iar mai jos, folosindu-ma de acesta, am calculat cmmmc-ul 
						 printr-o formula unde am fost ajutat de variabilele x si y care au avut rolul
						 de a retine numerele a si b la inceputul problemei.*/
		{
			r = a % b;
			a = b;
			b = r;
		}
		fprintf(g, "cmmdc= %d\n", a);
	c = x * y / a;
	fprintf(g, "cmmmc= %d", c);
	}
	
	
	system("pause");
	return 0;
}