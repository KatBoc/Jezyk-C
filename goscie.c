//zad 1 Napisz program kt�ry ma mo�liwo�� wyznaczenia sumy element�w tablicy 1D (jednowymiarowej) liczb rzeczywistych o dowolnym rozmiarze.
//W programie za sumowanie odpowiada� ma funkcja �go�cie�, kt�ra jako jeden z argument�w przyjmuje zmienn� tablicow� i zwraca wyniki w postaci sumy warto�ci element�w  tablicy.
//Program wy�wietla wynik dzia�ania funkcji �go�cie� na ekranie, poza tym nie komunikuje si� z u�ytkownikiem.

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

