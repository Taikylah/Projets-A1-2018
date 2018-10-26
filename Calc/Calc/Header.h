#pragma once
#include <math.h>

Gcd(int nbr1, int nbr2) {
	int temp;
	do {
		if (nbr1 < nbr2)
		{
			temp = nbr1;
			nbr1 = nbr2;
			nbr2 = temp;
		}
		nbr1 = nbr1 - nbr2;
	} while (nbr1);
	return nbr2;
}

float Addition(float nbr1, float nbr2) {
	float result = nbr1 + nbr2;
	return(result);
}

double Soustraction(float nbr1, float nbr2) {
	float result = nbr1 - nbr2;
	return(result);
}

double Multiplication(float nbr1, float nbr2) {
	float result = nbr1 * nbr2;
	return(result);
}

double Division(float nbr1, float nbr2) {
	float result = nbr1 / nbr2;
	return(result);
}

double Factorielle(double nbr1) {
	double result;
	if (nbr1 == 0) {
		 result = 1;
	}

	else {
		 result = (nbr1*(Factorielle(nbr1 - 1)));
	}
	return(result);
}

float Racine(double nbr1) {
	float result;
	result = sqrt(nbr1);
	return(result);
}

float Nieme(float nbr1, float nbr2)
{
	float result;
	result = pow(nbr1, 1 / nbr2);
	return(result);
}

float pi(float nbr1)
{
	float pi = 0.0;
	for (int i = 0; i < nbr1; i++)
	{
		pi += 1.0 / (4 * i + 1) / (4 * i + 3);
	}
	return(8 * pi);
}
