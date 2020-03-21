
#include<stdio.h>
#include<stdlib.h>

int main()
{	
	 int x; 
	int k, n = 0;
	printf("Dati numarul: ");
	scanf("%d", &x);

	printf("Pozitia bit-ului: ");
	scanf("%d", &k);

	if ((unsigned int ) x < 0 && (1 == (1 & (n >> k))))
		printf("Numarul este negativ!");
	else
		if ((unsigned int) x > 0 && (0 == (1 & (n >> k))))
			printf("Numarul este pozitiv!\n");

	system("pause");
	return 0;
}