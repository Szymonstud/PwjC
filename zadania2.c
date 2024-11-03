#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
/* Zad 1

	int a = 0, i = 0, max = 0;
	float suma=0, srednia=0;
	do
	{
	printf("Podaj liczbe: ");
	scanf("%d", &a);
	if (a > max) max = a;
	suma += a;
	i++;
	} while (a > 0);
	printf("\nSuma wynosi: %f", suma);
	srednia = suma / i;
	printf("\nSrednia wynosi: %f", srednia);
	printf("\nMax wynosi: %d", max);
*/

/* Zad2

	int a,suma=0,ujemne=0,dodatnie=0;
	for (int i = 0; i < 10; i++)
	{
		printf("Podaj liczbe: ");
		scanf("%d", &a);
		suma += a;
		if (a < 0)ujemne++;
		else dodatnie++;
	}
	printf("\nSuma wynosi: %d", suma);
	printf("\nIlosc dodatnich liczb wynosi: %d", dodatnie);
	printf("\nIlosc ujemnych liczb wynosi: %d", ujemne);
*/

/* Zad3

	int n, a, suma=0;
	printf("Podaj ile jest liczb w ciagu(n>0): ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Podaj liczbe: ");
		scanf("%d", &a);
		if (a > 0) suma += a;
		
	}
	printf("Suma ciagu n wynosi: %d", suma);
*/

/* Zad4

	int n, a, suma = 0;
	srand(time(NULL));
	printf("Podaj ile jest liczb w ciagu(n>0): ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		a = rand() % 56 - 10;
		printf("\nLiczba a: %d", a);
		if (a%2 == 0) suma += a;

	}
	printf("\nSuma ciagu n wynosi: %d", suma);
*/

	/*Zad5
	* 
	int n, a, licznik=1;
	float srednia = 0,suma = 0;
	
	printf("Podaj ile jest studentow w grupie: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("%d. Student liczba punktow: ",licznik);
		scanf("%d", &a);
		suma += a;
		licznik++;
	}
	srednia = suma / (licznik-1);
	printf("Srednia punktow grupy: %f", srednia);
*/

/*Zad6

	for (int i = 1; i < 101; i++)
	{
		printf("%d ", i);
	}
	printf("\n\n");
	for (int i = 100; i > -1;i--)
	{
		printf("%d ", i);
	}
	printf("\n\n");
	for (int i = 7; i < 78; i+=7)
	{
		printf("%d ", i);
	}
	printf("\n\n");
	for (int i = 20; i > -1; i -= 2)
	{
		printf("%d ", i);
	}
*/
//Zad7

int i, j,l;
for (i = 9; i > -1; i--) {
	for (j = 0; j <= i; j++)
		printf("X");
	printf("\n");
}

printf("\n\n");

for (i = 9; i > -1; i--) {
	for (l = 0; l <= i; l++)
	{
		printf(" ");
	}
	for (j = 9; j >= i; j--)
		printf("X");
	printf("\n");
}

printf("\n\n");

for (i = 9; i > -1; i--) {
	for (l = 9; l >= i; l--)
	{
		printf(" ");
	}
	for (j = 0; j <= i; j++)
		printf("X");
	printf("\n");
}

printf("\n\n");

for (i = 9; i > -1; i--) {
	for (l = 0; l <= i; l++)
	{
		printf(" ");
	}
	for (j = 9; j >= i; j--)
		printf("XX");
	printf("\n");
}


	
	return 0;
}
