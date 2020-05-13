#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int i, k, n, v[100], sol = 0;
char isS, isV = 0;

int esteprim(int x)
{
	if (x == 1)
		return 0;
	for (int i = 2; i*i <= x; i++)				//Functie pentru a afla daca un numar este prim.
		if (x%i == 0)
			return 0;
	return 1;
}

void init(int k)
{
	v[k] = 0;					/*Structura algortimului backtracking este urmata ca atare in aceasta problema,
								insa apar modificari la functiile succesor, valid(se construieste numarul urmator si se verifica daca este prim)
								iar la functia back se conditioneaza ca numarul sa fie cuprins intre 0 si 10 000.*/
}

int succesor(int k)
{
	if (v[k] < 9)
	{
		v[k]++;
		return 1;
	}
	else
		return 0;
}

int valid(int k)
{
	int nr = 0;
	for (i = 1; i <= k; i++)
		nr = nr * 10 + v[i];
	if (esteprim(nr))
		return 1;
	return 0;
}

int solution()
{
	return 1;
}

void print(int k, FILE *f)
{
	fprintf(f, "%d: ", ++sol);

	for (i = 1; i <= k; i++)
		fprintf(f, "%d", v[i]);

	fprintf(f, "\n");
}

void back(FILE *f)
{
	k = 1;
	init(k);
	while (k > 0)
	{
		isS = 0;
		isV = 0;
		if (k <= 4)
			do {
				isS = succesor(k);
				if (isS)
					isV = valid(k);
			} while (isS && !isV);
			if (isS)
			{
				if (solution())
				{
					print(k, f);
					k++;
					init(k);
				}
			}
			else
				k--;
	}
}

int main()
{
	FILE *f;
	f = fopen("out.txt", "wt");
	if (f == NULL)
		printf("Nu s-a putut deschide fisierul!\n");
	else
		back(f);

	system("pause");
	return 0;
}
