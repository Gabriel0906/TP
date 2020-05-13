#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>



int main()
{
	int n,c,b,i,aux,dist,dist2,maxi=0;
	FILE *f,*g;
	f = fopen("srv.in", "rt");
	g = fopen("srv.out", "wt");

	if (f == NULL || g == NULL)
		printf("Fisierul nu s-a putut deschide!"); /*In aceasta problema, am parcurs toate cele n perechi de numere, citind 
												   in acelasi timp pozitia casei, respectiv a biroului.Daca pozitia biroului este mai mare 
												   decat cea a casei, aceste valori sunt interschimbate, urmand sa se calculeze distantele 
												   ca atare. Iar daca cea de a 2 a distanta este mai mica decat prima aceasta din urma
												   ii ia valoarea, iar prima distanta parcursa este mai mare decat distanta maxima 
												   parcursa, aceasta devine distanta maxima parcursa.*/
	else
	{
		fscanf(f,"%d",&n);
		for (i = 1; i <= n; i++)
		{
			fscanf(f, "%d%d", &c, &b);
			if (b > c)
			{
				aux = c;
				c = b;
				b = aux;
			}
			dist = c - b;
			dist2 = 2*n - c + b;
			if (dist2 < dist)
				dist = dist2;
			if (dist > maxi)
				maxi = dist;

		}
	}
	fprintf(g, "%d", maxi);

	

	system("pause");
	return 0;
}