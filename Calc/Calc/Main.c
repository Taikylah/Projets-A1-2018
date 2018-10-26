#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

float nbr1;
float nbr2;
int oper;

float result;

int main(void)
{
	short loop = 1;
	while (loop == 1)
	{
		printf("Nombre 1 :\n");
		scanf("%f", &nbr1);
		printf("Nombre 2 (0 pour factorielle, racine, racine nieme, aprox de pi) :\n");
		scanf("%f", &nbr2);
		printf("1:Addition\n2:Soustraction\n3:Multiplication\n4:Division\n5:Factorielle\n6:Racine\n7:Racine Nième\n8:Aproximation de pi\n9:Plus grand diviseur commun\n0:Quitter\n");
		scanf("%i", &oper);
		switch (oper)
		{
		case 0:
			system("pause");
			return 0;
			break;

		case 1:
			result = Addition(nbr1, nbr2);
			printf("%f\n", result);
			break;
		case 2:
			result = Soustraction(nbr1, nbr2);
			printf("%f\n", result);
			break;
		case 3:
			result = Multiplication(nbr1, nbr2);
			printf("%f\n", result);
			break;
		case 4:
			result = Division(nbr1, nbr2);
			printf("%.2f\n", result);
			break;
		case 5:
			result = Factorielle(nbr1);
			printf("%f\n", result);
			break;
		case 6:
			result = Racine(nbr1);
			printf("%.2f\n", result);
			break;
		case 7:
			printf("Rang:");
			int nm;
			scanf("%i", &nm);
			result = Nieme(nbr1, nm);
			printf("%f\n", result);
			break;
		case 8:
			printf("Rang:");
			int rg;
			scanf("%i", &rg);
			result = pi(nbr1, rg);
			printf("%f\n", result);
			break;
		case 9:
			result = Gcd(nbr1, nbr2);
			printf("%0.f\n", result);
			break;
		}
	}

}
