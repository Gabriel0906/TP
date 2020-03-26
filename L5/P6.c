#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX_SIZE 100

int ArrayStack[MAX_SIZE]; 
int top = -1;  


void Push(int x)
{
	if (top == MAX_SIZE - 1)
	{
		
		printf("Error: stack overflow\n");
		return;
	}
	ArrayStack[++top] = x;
}

void Pop()
{
	if (top == -1)
	{
		 
		printf("Error: No element to pop\n");
		return;
	}
	top--;
}

 
int Peek()
{
	return ArrayStack[top];
}


int IsEmpty()
{
	if (top == -1)
	{
		return 1;
	}
	return 0;
}

 
void Print() {
	int i;
	printf("Number in 2nd base: ");
	for (i = top; i >=0; i--)
	{
		printf("%d", ArrayStack[i]);
	}
	printf("\n");
}

int main()
{
	int x, y = 0, nrcif = 0,z;
	do {
		printf("Dati o valoare: ");
		scanf("%d", &x);
	} while (x > 255 || x < 0);
	while (x)
	{
		nrcif++;
		Push(x % 2);
		if (x % 2)
			y++;
		x /= 2;
	}
	z = 8 - nrcif;
	while (z > 0)
	{
		Push(0);
		z--;
	}
	Print();

	while (!IsEmpty())
		Pop();
	z = 8 - y;
	while (z > 0)
	{
		Push(0);
		z--;
	}
	while (y > 0)
	{
		Push(1);
		y--;
	}
	Print();

	system("pause");
	return 0;
}