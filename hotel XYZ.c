//zad 2 Napisz program wyposa�ony w funkcj� �koszt�, kt�ra jako jedne z argument�w przyjmuje: 
//dwuwymiarow� tablic� liczb rzeczywistych � dowolnego rozmiaru, liczb� ca�kowit� oraz dwie liczby rzeczywiste; 
//do tego dodatkowe niezb�dne argumenty.
//Funkcja s�u�y do obliczenia kosztu pomalowania �cian w pomieszczeniach hotelu XYZ, na wybranym pi�trze. 
//W tablicy znajduj� si� warto�ci powierzchni do pomalowania w poszczeg�lnych pomieszczeniach hotelowych zgrupowanych pi�trami, jedno pi�tro to jeden wiersz w tablicy.
//Program powinien umo�liwi� wyznaczenie kosztu malowania pi�tra wybranego przez u�ytkownika. 
//U�ytkownik podaje te� wydajno�� farby [m2/l] (ilo�� metr�w kwadratowych przypadaj�cych na litr farby) oraz cen� litra farby [zl/l]. Dla u�atwienia pi�tra liczymy od parteru (poziom 0).

float koszt(float D[5][6], int p, float c, float w) // p-pietro, c-cena, w-wydajnosc
{
	float suma=0;
	int i;
	for(i=0; i<6; i++)
	{
		suma = suma + (D[p][i]/w)*c; // [m2 / (m2/l) * zl/l = zl]
	}
	return suma;
}


int main()
{
	float dane[5][6] = 
	{{ 36.3, 45.2, 14.7, 56.3, 0 ,0 }, //6 pokoi 5 pieter.
   { 57.8, 43.3, 36.9, 45.7, 45.7, 55.1},
   { 88, 75, 43.3, 86.6, 36.9, 30},
   { 88, 170.2, 56.3, 27, 0, 0 },
   { 30, 120, 0, 0, 0, 0 }};
   
    float wydajnosc;
    float cena;
    int pietro;
	float ile;
	
	
	printf("na ktorym pietrze chcesz malowac: ");
	
	do
	{
		scanf("%d", &pietro);
			if(pietro < 0 || pietro >= 5) printf("pietro nie istnieje");
	}while(pietro < 0 || pietro >= 5);
	
   
	printf("podaj cene farby: ");
	scanf("%f", &cena);
   
    printf("podaj wydajnosc farby [m2/l]: ");
	scanf("%f", &wydajnosc);
	
	ile = koszt(dane, pietro, cena, wydajnosc);
	
	printf("za pomalowanie pietra trzeba zaplacic %.1f zl", ile);
	
	return 0;
}
