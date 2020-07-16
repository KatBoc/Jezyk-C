//zad 2 Napisz program wyposa¿ony w funkcjê „koszt”, która jako jedne z argumentów przyjmuje: 
//dwuwymiarow¹ tablicê liczb rzeczywistych – dowolnego rozmiaru, liczbê ca³kowit¹ oraz dwie liczby rzeczywiste; 
//do tego dodatkowe niezbêdne argumenty.
//Funkcja s³u¿y do obliczenia kosztu pomalowania œcian w pomieszczeniach hotelu XYZ, na wybranym piêtrze. 
//W tablicy znajduj¹ siê wartoœci powierzchni do pomalowania w poszczególnych pomieszczeniach hotelowych zgrupowanych piêtrami, jedno piêtro to jeden wiersz w tablicy.
//Program powinien umo¿liwiæ wyznaczenie kosztu malowania piêtra wybranego przez u¿ytkownika. 
//U¿ytkownik podaje te¿ wydajnoœæ farby [m2/l] (iloœæ metrów kwadratowych przypadaj¹cych na litr farby) oraz cenê litra farby [zl/l]. Dla u³atwienia piêtra liczymy od parteru (poziom 0).

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
