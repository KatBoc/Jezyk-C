//zad 1 Napisz program który ma mo¿liwoœæ wyznaczenia sumy elementów tablicy 1D (jednowymiarowej) liczb rzeczywistych o dowolnym rozmiarze.
//W programie za sumowanie odpowiadaæ ma funkcja „goœcie”, która jako jeden z argumentów przyjmuje zmienn¹ tablicow¹ i zwraca wyniki w postaci sumy wartoœci elementów  tablicy.
//Program wyœwietla wynik dzia³ania funkcji „goœcie” na ekranie, poza tym nie komunikuje siê z u¿ytkownikiem.

#include <stdio.h>
#include <stdio.h>

float goscie(float A[], int n)
{
	float suma=0;
	int i;
	for (i=0; i<n; i++)
	{
		suma=suma+A[i];
	}
	return suma;
}

int main()
{
	float suma;
	float tab[7]={1, 2, 3, 4, 5, 6, 7};
	suma = goscie(tab, 7);
	printf("%.2f", suma);
	return 0;
}

