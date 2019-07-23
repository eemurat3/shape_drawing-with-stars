//// Bu dosya icinde sadece fonksiyonlarin icinde duzenleme yapabilirsiniz!!!!
/* murat KAYMAZ
elektrik elektronik m�h.
3.s�n�f
*/
#include <iostream>
/*Bu fonksiyon ekrana y�ld�zlardan olu�an bir ��gen yazar.
Fonksiyon sadece [3, 15] aral���ndaki tek say�larda �al���r.
Uygun parametre g�nderilmezse ekrana hi�bir �ey yazd�rmadan ��kar.*/
void duzUcgen(int deger)
{
	// Bu kismi fonksiyon tanimina uygun bicimde duzenleyiniz.

	/*satir_sayisi ucgenin kac sat�rdan olustugunu tutar
	bosluk_sayisi ise her sat�rda kac bosluk olacag�n� tutar
	yildiz sayisi ise fonksiyon cal��maya baslamadan onceki yilds sayisini tutar*/

	int bosluk_sayisi = (deger / 2);
	int satir_sayisi = ((deger + 1) / 2);
	int yildiz_sayisi = 1;
	
	if (deger >= 3 && deger <= 15 && deger % 2 == 1)//fonksiyon �al��ma ko�ulu
	{
		for (int i = 0; i < satir_sayisi; i++)//sat�r say�s�  cal�san  dongu
		{
			for (int j =0; j<bosluk_sayisi ; j++)//bosluk say�s�n� ayarlayan dongu
				std::cout << " ";
			
			for (int j = 0; j < yildiz_sayisi; j++)//yildizlari ekrana bastiran dongu
				std::cout << "*";

			std::cout << "\n";//sat�rdaki yild�z ve bosluk say�s� bittikten sonra alt sat�ra iner

			yildiz_sayisi += 2;//deger'e kadar yildiz sayisini iki artirir
			bosluk_sayisi -= 1;//bosluk sayisini her seferinde bir azaltir
		}
	}
}


/*Bu fonksiyon ekrana y�ld�zlardan olu�an ters bir ��gen yazar.
Fonksiyon sadece[3, 15] aral���ndaki tek say�larda �al���r.
Uygun parametre g�nderilmezse ekrana hi�bir �ey yazd�rmadan ��kar.*/
void tersUcgen(int deger)
{
	// Bu kismi fonksiyon tanimina uygun bicimde duzenleyiniz.
	/*satir_sayisi ucgenin kac sat�rdan olustugunu tutar
	bosluk_sayisi ise her sat�rda kac bosluk olacag�n� tutar
	yildiz sayisi ise fonksiyon cal��maya baslamadan onceki yildiz sayisini tutar*/

	int bosluk_sayisi=0;
	int satir_sayisi = ((deger + 1) / 2);
	int yildiz_sayisi = deger;

	if (deger >= 3 && deger <= 15 && deger % 2 == 1);//fonksiyon �al��ma ko�ulu
	{
		for (int i = 0; i < satir_sayisi; i++)//sat�r say�s� cal�san  dongu
		{
			for (int j = 0; j <bosluk_sayisi; j++)//bosluk say�s�n� ayarlayan dongu
				std::cout << " ";

			for (int j = 0; j < yildiz_sayisi; j++)//yildizlari ekrana bastiran dongu
				std::cout << "*";

			std::cout << "\n";

			yildiz_sayisi -= 2;//yildiz sayisi bir olana kadar sayiyi azalt�r
			bosluk_sayisi += 1;//bosluk sayisini her seferinde bir artirir
		}
    }
}

/*Bu fonksiyon ekrana y�ld�zlardan olu�an bir elmas �ekli yazar.
Fonksiyon sadece [5, 15] aral���ndaki tek say�larda �al���r.
Uygun parametre g�nderilmezse ekrana hi�bir �ey yazd�rmadan ��kar.*/
void elmas(int deger)
{
	// Bu kismi fonksiyon tanimina uygun bicimde duzenleyiniz.
	/*satir_sayisi ucgenin kac sat�rdan olustugunu tutar
	bosluk_sayisi ise her sat�rda kac bosluk olacag�n� tutar
	yildiz sayisi ise fonksiyon cal��maya baslamadan onceki yildiz sayisini tutar
	yeni_yildiz_sayisi ise elmas�n alt k�sm�n� �izmeye baslarkenki y�ld�z
	say�s�n� tutar*/

	int bosluk_sayisi= int(deger / 2);
	int satir_sayisi=((deger + 1) / 2);
	int yildiz_sayisi = 1;
	int yeni_yildiz_sayisi = deger - 2;

	if (deger >= 5 && deger <= 15 && deger % 2 == 1)//fonksiyon �al��ma ko�ulu
	{
		for (int i = 0; i < satir_sayisi; i++)//sat�r say�s� cal�san  dongu
		{
			for (int j = 0; j < bosluk_sayisi; j++)//bosluk say�s�n� ayarlayan dongu
				std::cout << " ";

			for (int j = 0; j < yildiz_sayisi; j++)//yildizlari ekrana bastiran dongu
				std::cout << "*";

			std::cout << "\n";

			yildiz_sayisi += 2;//deger'e kadar yildiz sayisini iki artirir
			bosluk_sayisi -= 1;//bosluk sayisini her seferinde bir azaltir
		}

		bosluk_sayisi = 1;//elmas�n alt k�sm�n� �izmeye ba�larkenki bosluk sayisi
		for (int i = 0; i < satir_sayisi - 1; i++)//sat�r say�s� cal�san  dongu
		{
			for (int j = 0; j < bosluk_sayisi; j++)//bosluk say�s�n� ayarlayan dongu
				std::cout << " ";

			for (int j = 0; j < yeni_yildiz_sayisi; j++)//yildizlari ekrana bastiran dongu
				std::cout << "*";

			std::cout << "\n";//sat�rdaki yild�z ve bosluk say�s� bittikten sonra alt sat�ra iner

			yeni_yildiz_sayisi -= 2; //elmas�n alt k�sm�n�n �izimi bitene kadar yildiz sayisini azaltir
			bosluk_sayisi += 1;//bosluk sayisini her seferinde bir artirir
		}
	}
}

int main()
{
	elmas(5);
	duzUcgen(9);
	tersUcgen(9);
	
}
