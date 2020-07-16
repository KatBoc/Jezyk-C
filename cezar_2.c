//zad 3. Napisz program wyposa¿ony w  funkcjê "cezar", która s³u¿y do szyfrowania tablicy znaków szyfrem Cezara. 
//Wielkoœæ przesuniêcia pobierana jest od u¿ytkownika i przekazywana do funkcji jako jej argument.
//Wyœwietl na ekranie napis który bêdzie szyfrowany.
//Nastêpnie po zaszyfrowaniu tekstu przez funkcjê "cezar", wyœwietl zakodowany tekst na ekranie.
//Na ocenê db: napisz funkcjê deszyfruj¹c¹ "deszyfracja" i wyœwietl na ekranie napis odszyfrowany.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void cezar(char *slowo, int x)
	{
		
		int n;
		int i;
		
		n = strlen(slowo); //funkcja licz¹ca dlugoœc podanego slowa
		
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
