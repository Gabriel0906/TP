#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void citire(int a[], int *n,FILE *f)
{
	int i;
	fscanf(f,"%d", n);
	for (i = 0; i < *n; i++)				/*In aceasta problema, am folosit cateva functii pentru a-mi usura munca, astfel
											rezolvarea problemei s-a desfasurat intr-un mod putin mai eficient.*/
									
		fscanf(f,"%d", &a[i]);
}

int caut_elem(int a[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)					/*Functia caut_elem cauta in vectorul a un element pentru a verifica daca acesta este acelasi cu
											elementul dorit de utilizator, iar in caz afirmativ returneaza 1, respectiv 0 in caz negativ.*/
		if (a[i] == x)
			return 1;
	return 0;
}
void afisare(int a[], int n,FILE *f)
{
	int i;
	for (i = 0; i < n; i++)
		fprintf(f,"%d ", a[i]);
	fprintf(f,"\n");
}
int main()
{
	int a[20], b[20],m,n,c[20],p,i;
	FILE *f,*g;
	f = fopen("in.txt", "rt");
	g = fopen("out.txt", "wt");
	if (f == NULL || g == NULL)
		printf("Nu s-a putut deschide fisierul!\n");
	else
	{
		citire(a, &n, f);
		citire(b, &m, f);

		for (i = 0; i < n; i++)
			c[i] = a[i];
		p = n;
		for (i = 0; i < m; i++)
			if (caut_elem(a, n, b[i]) == 0)
				c[p++] = b[i];
		fprintf(g, "Reuniunea multimilor este: ");
		afisare(c, p, g);

		p = 0;
		for (i = 0; i < n; i++)
			if (caut_elem(b, m, a[i]) == 1)
				c[p++] = a[i];
		fprintf(g, "Intersectia multimilor este: ");					/*Operatiile cu multimi s au efectuat in aceeasi maniera, intre acestea fiind 
																		diferite doar anumite conditii, cum ar fi cea de la operatia de intersectie a 
																		multimilor unde functia caut_elem returneaza 1.*/
		afisare(c, p, g);

		p = 0;
		for (i = 0; i < n; i++)
			if (caut_elem(b, m, a[i]) == 0)
				c[p++] = a[i];
		fprintf(g, "Diferenta dintre multimile A si B  este: ");
		afisare(c, p, g);

		p = 0;
		for (i = 0; i < m; i++)
			if (caut_elem(a, n, b[i]) == 0)
				c[p++] = b[i];
		fprintf(g, "Diferenta dintre multimile B si A  este: ");
		afisare(c, p, g);
	}
	system("pause");
	return 0;
}