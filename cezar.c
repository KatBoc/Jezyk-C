//zad 3. Napisz program wyposa�ony w  funkcj� "cezar", kt�ra s�u�y do szyfrowania tablicy znak�w szyfrem Cezara. 
//Wielko�� przesuni�cia pobierana jest od u�ytkownika i przekazywana do funkcji jako jej argument.
//Wy�wietl na ekranie napis kt�ry b�dzie szyfrowany.
//Nast�pnie po zaszyfrowaniu tekstu przez funkcj� "cezar", wy�wietl zakodowany tekst na ekranie.
//Na ocen� db: napisz funkcj� deszyfruj�c� "deszyfracja" i wy�wietl na ekranie napis odszyfrowany.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void cezar(char slowo[], int x)
	{
		int n;
		int i;
		
		n = strlen(slowo);
		
		for (i=0; i<n; i++)
			{
			if (x > 0)
				{
				if(slowo[i] + x <= 'z')
					slowo[i] = slowo[i] + x;
				else
					slowo[i] = slowo[i] + x - 26;
				}

			else 
				{
				if(slowo[i] + x >= 'a')
					slowo[i] = slowo[i] + x;
				else
					slowo[i] = slowo[i] + x + 26;
				}
			}
		printf("%s", slowo);
	}
	
/*
void deszyfracja(char slowo[], int x)
	{
		int z;
		z = -x;
		
		cezar(slowo, z)
	}
*/

int main()
{
	char a[255];
	char b[255];
	int klucz;
	
	printf ("podaj takie nie za dlugie slowo do zaszyfrowania: \n");
	scanf ("%s", &a);
	printf ("podaj klucz (-26; 26): \n");
	
		do
		{
		scanf ("%d", &klucz);
			if(klucz<-26 || klucz>26) 
				printf ("blad, wpisz poprawna cyfre");
		}while
		(klucz<-26 || klucz>26);
	
	cezar (a, klucz);
	
	return 0;
}
