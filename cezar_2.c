//zad 3. Napisz program wyposa�ony w  funkcj� "cezar", kt�ra s�u�y do szyfrowania tablicy znak�w szyfrem Cezara. 
//Wielko�� przesuni�cia pobierana jest od u�ytkownika i przekazywana do funkcji jako jej argument.
//Wy�wietl na ekranie napis kt�ry b�dzie szyfrowany.
//Nast�pnie po zaszyfrowaniu tekstu przez funkcj� "cezar", wy�wietl zakodowany tekst na ekranie.
//Na ocen� db: napisz funkcj� deszyfruj�c� "deszyfracja" i wy�wietl na ekranie napis odszyfrowany.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void cezar(char *slowo, int x)
	{
		
		int n;
		int i;
		
		n = strlen(slowo); //funkcja licz�ca dlugo�c podanego slowa
		
		for (i=0; i<n; i++)
			if(slowo[i] <= 'Z' && slowo[i] >= 'A')
					{
					if (x > 0)
						{
						if(slowo[i] + x <= 'Z')
							*(slowo+i) = *(slowo+i) + x;
						else
							*(slowo+i) = *(slowo+i) + x - 26;
						}
		
					else 
						{
						if(slowo[i] + x >= 'A')
							*(slowo+i) = *(slowo+i) + x;
						else
							*(slowo+i) = *(slowo+i) + x + 26;
						}
					}
			else if (slowo[i] <= 'z' && slowo[i] >= 'a')
					{			
					if (x > 0)
						{
						if(slowo[i] + x <= 'z')
							*(slowo+i) = *(slowo+i) + x;
						else
							*(slowo+i) = *(slowo+i) + x - 26;
						}
		
					else 
						{
						if(slowo[i] + x >= 'a')
							*(slowo+i) = *(slowo+i) + x;
						else
							*(slowo+i) = *(slowo+i) + x + 26;
						}
					}			
			return slowo;
	}
	


void deszyfracja(char slowo[], int x)
	{
		int z;
		z = -x;
		
		cezar(slowo, z);
	}


int main()
{
	char a[256]; // a - slowo asdfg
	int klucz;
	printf ("podaj takie nie za dlugie slowo do zaszyfrowania: \n"); 
	scanf ("%s", &a);
	printf ("podaj klucz (-26; 26): \n");
	
		do
		{
		scanf ("%d", &klucz);
			if(klucz<-26 || klucz>26) 
				printf ("Blad, wpisz poprawna cyfre: ");
		}while	(klucz < -26 || klucz > 26);
		
		
		
		printf("slowo przed szyfrowaniem: %s\n", a);
		
		cezar(a, klucz);

		printf("slowo po szyfrowaniu: %s\n", a); 
		
		deszyfracja(a, klucz);
		
		printf("slowo po deszyfrowaniu: %s\n", a); 
		
		
	return 0;
}
