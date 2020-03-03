#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void cautare_liniara(int v[], int n, int nr_cautat)
{
	int i;
	for (i = 0; i < n; i++)
		if (v[i] == nr_cautat)
		{
			printf("Numarul cautat %d se gaseste pe pozitia %d in vector \n", nr_cautat, i);
			break;
		}
	if (i == n)
		printf("Numarul cautat %d nu se gaseste in vector \n", nr_cautat);
}

void cautare_binara(int v[], int nr_cautat, int st, int dr)
{
	while (st <= dr)
	{
		int mij = (st + dr) / 2;
		if (v[mij] == nr_cautat)
		{
			printf("Numarul a fost gasit!\n");
			break;
		}
		else
		{
			if (v[mij] > nr_cautat)
				dr = mij - 1;
			else
				st = mij + 1;
		}
	}
	if (st > dr)
		printf("Numarul nu a fost gasit!\n");
}

void bubble_sort(int v[], int n)
{
	int i, j, aux;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (v[j] > v[j + 1])
			{
				aux = v[j];
				v[j] = v[j + 1]; //interschimbarea elementelor din vector.
				v[j + 1] = aux;
			}
		}
	}
}

void citire_vector(int v[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}
}
int main()
{
	int v[100], n, nr_cautat, i, mij;

	printf("Dati numarul de elemente: ");
	scanf("%d", &n);

	citire_vector(v, n);

	printf("Numarul cautat este: ");
	scanf("%d", &nr_cautat);

	cautare_liniara(v, n, nr_cautat);

	bubble_sort(v, n);
	//5 2 9 1 4
	cautare_binara(v, nr_cautat, 0, n - 1);

	system("pause");
	return 0;
}