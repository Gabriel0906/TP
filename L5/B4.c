#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX_SIZE 100

int IsFull(int *top)
{
	if (*top == MAX_SIZE - 1)
	{
		 
		printf("Error: stack overflow\n");
		return 1;
	}
	return 0;
}

void Push(int *x, int *top, int *ArrayStack)
{
	if (IsFull(top))
		return;
	ArrayStack[++(*top)] = *x;
}


void Pop(int *top, int *ArrayStack)
{
	if (*top == -1)
	{
		 
		printf("Error: No element to pop\n");
		return;
	}
	(*top)--;
}


int Peek(int *top, int *ArrayStack)
{
	return ArrayStack[*top];
}


int IsEmpty(int *top)
{
	if (*top == -1)
	{
		return 1;
	}
	return 0;
}


void Print(int *top, int *ArrayStack) {
	int *i = malloc(sizeof(int));
	printf("Stack: ");
	for (*i = 0; *i <= *top; (*i)++)
	{
		printf("%d ", ArrayStack[*i]);
	}
	printf("\n");
}


int main()
{
	int *x = malloc(sizeof(int));
	int *i = malloc(sizeof(int));
	int *ArrayStack = malloc(sizeof(int)*MAX_SIZE); 
	int *top = malloc(sizeof(int));  
	*top = -1;
	for (*i = 0; *i < 7; (*i)++)
	{
		printf("Valoarea introdusa este: ");
		scanf("%d", x);
		Push(x, top, ArrayStack);
	}
	Print(top, ArrayStack);

	printf("\n");

	while (!IsEmpty(top))
	{
		printf("%d ", Peek(top, ArrayStack));
		Pop(top, ArrayStack);
	}

	system("pause");
	return 0;

}