
#include <iostream>
/*Bu fonksiyon ekrana yıldızlardan oluşan bir üçgen yazar.
Fonksiyon sadece [3, 15] aralığındaki tek sayılarda çalışır.
Uygun parametre gönderilmezse ekrana hiçbir şey yazdırmadan çıkar.*/
void duzUcgen(int deger)
{
	// Bu kismi fonksiyon tanimina uygun bicimde duzenleyiniz.

	/*satir_sayisi ucgenin kac satırdan olustugunu tutar
	bosluk_sayisi ise her satırda kac bosluk olacagını tutar
	yildiz sayisi ise fonksiyon calışmaya baslamadan onceki yilds sayisini tutar*/

	int bosluk_sayisi = (deger / 2);
	int satir_sayisi = ((deger + 1) / 2);
	int yildiz_sayisi = 1;
	
	if (deger >= 3 && deger <= 15 && deger % 2 == 1)//fonksiyon çalışma koşulu
	{
		for (int i = 0; i < satir_sayisi; i++)//satır sayısı  calısan  dongu
		{
			for (int j =0; j<bosluk_sayisi ; j++)//bosluk sayısını ayarlayan dongu
				std::cout << " ";
			
			for (int j = 0; j < yildiz_sayisi; j++)//yildizlari ekrana bastiran dongu
				std::cout << "*";

			std::cout << "\n";//satırdaki yildız ve bosluk sayısı bittikten sonra alt satıra iner

			yildiz_sayisi += 2;//deger'e kadar yildiz sayisini iki artirir
			bosluk_sayisi -= 1;//bosluk sayisini her seferinde bir azaltir
		}
	}
}


/*Bu fonksiyon ekrana yıldızlardan oluşan ters bir üçgen yazar.
Fonksiyon sadece[3, 15] aralığındaki tek sayılarda çalışır.
Uygun parametre gönderilmezse ekrana hiçbir şey yazdırmadan çıkar.*/
void tersUcgen(int deger)
{
	// Bu kismi fonksiyon tanimina uygun bicimde duzenleyiniz.
	/*satir_sayisi ucgenin kac satırdan olustugunu tutar
	bosluk_sayisi ise her satırda kac bosluk olacagını tutar
	yildiz sayisi ise fonksiyon calışmaya baslamadan onceki yildiz sayisini tutar*/

	int bosluk_sayisi=0;
	int satir_sayisi = ((deger + 1) / 2);
	int yildiz_sayisi = deger;

	if (deger >= 3 && deger <= 15 && deger % 2 == 1);//fonksiyon çalışma koşulu
	{
		for (int i = 0; i < satir_sayisi; i++)//satır sayısı calısan  dongu
		{
			for (int j = 0; j <bosluk_sayisi; j++)//bosluk sayısını ayarlayan dongu
				std::cout << " ";

			for (int j = 0; j < yildiz_sayisi; j++)//yildizlari ekrana bastiran dongu
				std::cout << "*";

			std::cout << "\n";

			yildiz_sayisi -= 2;//yildiz sayisi bir olana kadar sayiyi azaltır
			bosluk_sayisi += 1;//bosluk sayisini her seferinde bir artirir
		}
    }
}

/*Bu fonksiyon ekrana yıldızlardan oluşan bir elmas şekli yazar.
Fonksiyon sadece [5, 15] aralığındaki tek sayılarda çalışır.
Uygun parametre gönderilmezse ekrana hiçbir şey yazdırmadan çıkar.*/
void elmas(int deger)
{
	// Bu kismi fonksiyon tanimina uygun bicimde duzenleyiniz.
	/*satir_sayisi ucgenin kac satırdan olustugunu tutar
	bosluk_sayisi ise her satırda kac bosluk olacagını tutar
	yildiz sayisi ise fonksiyon calışmaya baslamadan onceki yildiz sayisini tutar
	yeni_yildiz_sayisi ise elmasın alt kısmını çizmeye baslarkenki yıldız
	sayısını tutar*/

	int bosluk_sayisi= int(deger / 2);
	int satir_sayisi=((deger + 1) / 2);
	int yildiz_sayisi = 1;
	int yeni_yildiz_sayisi = deger - 2;

	if (deger >= 5 && deger <= 15 && deger % 2 == 1)//fonksiyon çalışma koşulu
	{
		for (int i = 0; i < satir_sayisi; i++)//satır sayısı calısan  dongu
		{
			for (int j = 0; j < bosluk_sayisi; j++)//bosluk sayısını ayarlayan dongu
				std::cout << " ";

			for (int j = 0; j < yildiz_sayisi; j++)//yildizlari ekrana bastiran dongu
				std::cout << "*";

			std::cout << "\n";

			yildiz_sayisi += 2;//deger'e kadar yildiz sayisini iki artirir
			bosluk_sayisi -= 1;//bosluk sayisini her seferinde bir azaltir
		}

		bosluk_sayisi = 1;//elmasın alt kısmını çizmeye başlarkenki bosluk sayisi
		for (int i = 0; i < satir_sayisi - 1; i++)//satır sayısı calısan  dongu
		{
			for (int j = 0; j < bosluk_sayisi; j++)//bosluk sayısını ayarlayan dongu
				std::cout << " ";

			for (int j = 0; j < yeni_yildiz_sayisi; j++)//yildizlari ekrana bastiran dongu
				std::cout << "*";

			std::cout << "\n";//satırdaki yildız ve bosluk sayısı bittikten sonra alt satıra iner

			yeni_yildiz_sayisi -= 2; //elmasın alt kısmının çizimi bitene kadar yildiz sayisini azaltir
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
