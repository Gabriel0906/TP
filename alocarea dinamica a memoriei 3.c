#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
				/// TRANSMITEREA PARAMETRILOR PRIN REFERINTA. ///
void Swap(int p, int q) //prin valoare
{
	int k;
	k = p;
	p = q;
	q = k;
}
/*void Swap1(int &p, int &q) //prin referinta (C++)
{
	int k;
	k = p;
	p = q;
	q = k;
}*/
void Swap2(int *p, int *q) //prin referinta
{
	int k;
	k = *p;
	*p = *q;
	*q = k;
}
int main()
{
	int a = 2; int b = 5;

	Swap(a, b); printf("Swap -> %d %d\n", a, b);
	//Swap1(a, b); printf("Swap1 -> %d %d\n", a, b);
	Swap2(&a, &b); printf("Swap2 -> %d %d\n", a, b);

	system("pause");
	return 0;
}