#include <stdio.h>
int main()
{
	//Zad1

	//printf("\nnr albumu: 134918\n");

	//Zad2
/*
	int a;
	printf("\nPodaj liczbe: ");
	scanf("%d", &a);
	if (a % 2 == 0)
	{
		printf("\nLiczba jest parzysta\n");
	}
	else
		printf("\nLiczba jest nieparzysta\n");
*/
	//Zad3
/*
	float f, g;
	printf("\nPodaj dwie liczby: ");
	scanf("%f %f", &f, &g);
	if (f > g)
	{
		printf("Liczba %f jest wieksza od %f", f, g);
	}
	else if (g > f)
	{
		printf("Liczba %f jest wieksza od %f", g, f);
	}
	else
	{
		printf("Liczby %f i %f sa rowne", f, g);
	}
*/

	//Zad4
	/*
	float b, c, d, e;
	printf("\nPodaj cztery liczby: ");
	scanf("%f %f %f %f", &b, &c, &d, &e);
	float sr = (b + c + d + e)/4 ;
	printf("\nSrednia arytmetyczna wynosi: %f\n",sr);
*/
	//Zad5
	char op;
	float h, j,wynik;
	printf("\n####### KALKULATOR #######\n");
	printf("\nPodaj operator liczbowy(+,-,/,*): ");
	scanf("\n%c", &op);
	printf("\nPodaj dwie liczby ktore chcesz policzyc: \n");
	printf("\nPierwsza liczba : ");
	scanf("%f", &h);
	printf("\nDruga liczba : ");
	scanf("%f", &j);

	switch (op)
	{
		case '+':
			wynik = h + j;
			printf("\nWynik wynosi: %f\n", wynik);
			break;
		case '-':
			wynik = h - j;
			printf("\nWynik wynosi: %f\n", wynik);
			break;
		case '/':
			wynik = h / j;
			printf("\nWynik wynosi: %f\n", wynik);
			break;
		case '*':
			wynik = h * j;
			printf("\nWynik wynosi: %f\n", wynik);
			break;

	default:
		printf("\nOperator jest nieprawidlowy\n");
		break;
	}

	return 0;}