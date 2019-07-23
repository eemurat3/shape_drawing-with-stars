//// Bu dosya icinde sadece fonksiyonlarin icinde duzenleme yapabilirsiniz!!!!
/* murat KAYMAZ
elektrik elektronik müh.
3.sýnýf
*/
#include <iostream>
/*Bu fonksiyon ekrana yýldýzlardan oluþan bir üçgen yazar.
Fonksiyon sadece [3, 15] aralýðýndaki tek sayýlarda çalýþýr.
Uygun parametre gönderilmezse ekrana hiçbir þey yazdýrmadan çýkar.*/
void duzUcgen(int deger)
{
	// Bu kismi fonksiyon tanimina uygun bicimde duzenleyiniz.

	/*satir_sayisi ucgenin kac satýrdan olustugunu tutar
	bosluk_sayisi ise her satýrda kac bosluk olacagýný tutar
	yildiz sayisi ise fonksiyon calýþmaya baslamadan onceki yilds sayisini tutar*/

	int bosluk_sayisi = (deger / 2);
	int satir_sayisi = ((deger + 1) / 2);
	int yildiz_sayisi = 1;
	
	if (deger >= 3 && deger <= 15 && deger % 2 == 1)//fonksiyon çalýþma koþulu
	{
		for (int i = 0; i < satir_sayisi; i++)//satýr sayýsý  calýsan  dongu
		{
			for (int j =0; j<bosluk_sayisi ; j++)//bosluk sayýsýný ayarlayan dongu
				std::cout << " ";
			
			for (int j = 0; j < yildiz_sayisi; j++)//yildizlari ekrana bastiran dongu
				std::cout << "*";

			std::cout << "\n";//satýrdaki yildýz ve bosluk sayýsý bittikten sonra alt satýra iner

			yildiz_sayisi += 2;//deger'e kadar yildiz sayisini iki artirir
			bosluk_sayisi -= 1;//bosluk sayisini her seferinde bir azaltir
		}
	}
}


/*Bu fonksiyon ekrana yýldýzlardan oluþan ters bir üçgen yazar.
Fonksiyon sadece[3, 15] aralýðýndaki tek sayýlarda çalýþýr.
Uygun parametre gönderilmezse ekrana hiçbir þey yazdýrmadan çýkar.*/
void tersUcgen(int deger)
{
	// Bu kismi fonksiyon tanimina uygun bicimde duzenleyiniz.
	/*satir_sayisi ucgenin kac satýrdan olustugunu tutar
	bosluk_sayisi ise her satýrda kac bosluk olacagýný tutar
	yildiz sayisi ise fonksiyon calýþmaya baslamadan onceki yildiz sayisini tutar*/

	int bosluk_sayisi=0;
	int satir_sayisi = ((deger + 1) / 2);
	int yildiz_sayisi = deger;

	if (deger >= 3 && deger <= 15 && deger % 2 == 1);//fonksiyon çalýþma koþulu
	{
		for (int i = 0; i < satir_sayisi; i++)//satýr sayýsý calýsan  dongu
		{
			for (int j = 0; j <bosluk_sayisi; j++)//bosluk sayýsýný ayarlayan dongu
				std::cout << " ";

			for (int j = 0; j < yildiz_sayisi; j++)//yildizlari ekrana bastiran dongu
				std::cout << "*";

			std::cout << "\n";

			yildiz_sayisi -= 2;//yildiz sayisi bir olana kadar sayiyi azaltýr
			bosluk_sayisi += 1;//bosluk sayisini her seferinde bir artirir
		}
    }
}

/*Bu fonksiyon ekrana yýldýzlardan oluþan bir elmas þekli yazar.
Fonksiyon sadece [5, 15] aralýðýndaki tek sayýlarda çalýþýr.
Uygun parametre gönderilmezse ekrana hiçbir þey yazdýrmadan çýkar.*/
void elmas(int deger)
{
	// Bu kismi fonksiyon tanimina uygun bicimde duzenleyiniz.
	/*satir_sayisi ucgenin kac satýrdan olustugunu tutar
	bosluk_sayisi ise her satýrda kac bosluk olacagýný tutar
	yildiz sayisi ise fonksiyon calýþmaya baslamadan onceki yildiz sayisini tutar
	yeni_yildiz_sayisi ise elmasýn alt kýsmýný çizmeye baslarkenki yýldýz
	sayýsýný tutar*/

	int bosluk_sayisi= int(deger / 2);
	int satir_sayisi=((deger + 1) / 2);
	int yildiz_sayisi = 1;
	int yeni_yildiz_sayisi = deger - 2;

	if (deger >= 5 && deger <= 15 && deger % 2 == 1)//fonksiyon çalýþma koþulu
	{
		for (int i = 0; i < satir_sayisi; i++)//satýr sayýsý calýsan  dongu
		{
			for (int j = 0; j < bosluk_sayisi; j++)//bosluk sayýsýný ayarlayan dongu
				std::cout << " ";

			for (int j = 0; j < yildiz_sayisi; j++)//yildizlari ekrana bastiran dongu
				std::cout << "*";

			std::cout << "\n";

			yildiz_sayisi += 2;//deger'e kadar yildiz sayisini iki artirir
			bosluk_sayisi -= 1;//bosluk sayisini her seferinde bir azaltir
		}

		bosluk_sayisi = 1;//elmasýn alt kýsmýný çizmeye baþlarkenki bosluk sayisi
		for (int i = 0; i < satir_sayisi - 1; i++)//satýr sayýsý calýsan  dongu
		{
			for (int j = 0; j < bosluk_sayisi; j++)//bosluk sayýsýný ayarlayan dongu
				std::cout << " ";

			for (int j = 0; j < yeni_yildiz_sayisi; j++)//yildizlari ekrana bastiran dongu
				std::cout << "*";

			std::cout << "\n";//satýrdaki yildýz ve bosluk sayýsý bittikten sonra alt satýra iner

			yeni_yildiz_sayisi -= 2; //elmasýn alt kýsmýnýn çizimi bitene kadar yildiz sayisini azaltir
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
