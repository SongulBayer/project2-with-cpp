
#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main()

{
	setlocale(LC_ALL, "turkish");  //Türkçe karakterler için
	int matrisboyutu;
	while (true)
	{
		cout << "Matris boyutu girin: ";  //matris boyutu istenilen aralýkta girilinceye kadar matris boyutu girilmesini ister
		cin >> matrisboyutu;

		if (matrisboyutu <= 25 && matrisboyutu >= 5)
		{
			cout << "Ýþlem devam ediyor :)" << endl;
			break;
		}
		else {
			matrisboyutu > 25 && matrisboyutu < 5;
			cout << "Matris boyutu 25'ten küçük 5'ten büyük olmalý" << endl;
		}
	}

	cout << "Matris:" << "\n";

	cout << "        ";  //matris baþýndaki sütun numaralarýný yazar
	for (int i = 1; i <= matrisboyutu; i++)
	{
		cout << i << "       ";
	}
	cout << endl;

	cout << "        ";

	for (int i = 1; i <= 7 * matrisboyutu; i++)  //sütun numaralarýnýn altýndaki çizgi
	{
		cout << "_";
	}
	cout << "\n";

	int a[25][25];

	for (int i = 0; i < matrisboyutu; i++)
	{
		cout << endl;
		cout << i + 1 << "|";  //matrisin satýr numarasýný belirten satýlarý yazar(i for döngüsünde 0'dan baþlayarak tanýmlanmýþ. Bu nedenle satýr sayýsý 0'dan baþlýyor. i+1 yazarak düzelttim)

		for (int j = 0; j < matrisboyutu; j++)  //matris elemanlarýný rasgele olarak atar
		{
			a[i][j] = rand() % 10;  //10'dan küçük olan sayýlarý matrisin elemanlarý olarak atar
			cout << "\t" << a[i][j];  //oluþturulan matrisi ekrana yazar

		}
		cout << endl;
	}

	int sayi;  //switch case yapýsýndaki seçenekleri sayý yoluyla tanýmladým. 
	cout << "\n ÝÞLEM SEÇÝNÝZ";
	cout << "\n -------------";

	cout << "\n 1= seçilen satýr sütun yer deðiþtir kesiþen elemanlarý topla";
	cout << "\n 2= seçilen satýrda tek sayýlarý baþa al çiftleri sona at";
	cout << "\n 3= seçilen sütun içinde elemanlarý ters çevir";
	cout << "\n 4= seçilen eleman yerine tüm elemanlarý topla sayýyý çýkartýp yaz(çalýþmýyor)";

	cout << "\n -------------";
	cout << "\n SEÇÝMÝNÝZ: ";
	cin >> sayi;


	switch (sayi)  //cout iþlemi ile verien talimata göre iþlem yapan switch case yapýsý
	{
	case 1:  //klavyeden 1 girilirse yapýlacak iþlem
		int degiseceksatir;
		int degiseceksutun;
		while (true)  //satýr sayýsý istenilen aralýkta oluncaya kadar kullanýcýdan satýr sayýsý ister
		{
			cout << "\n Deðiþtirilmesi istenen satýrý girin";
			cout << "\n -----------------------------------";
			cout << "\n Seçiminiz: ";
			cin >> degiseceksatir;


			if (degiseceksatir <= matrisboyutu)
			{
				cout << "\n Ýþlem devam ediyor :)" << endl;
				break;
			}
			else {
				degiseceksatir > matrisboyutu;
				cout << "\n Seçilen satýr matris boyutundan büyük olmamalý" << endl;
			}
		}

		while (true)  //sütun sayýsý istenilen aralýkta oluncaya kadar kullanýcýdan satýr sayýsý ister
		{
			cout << "\n Deðiþtirilmesi istenen sütunu girin";
			cout << "\n -----------------------------------";
			cout << "\n Seçiminiz: ";
			cin >> degiseceksutun;


			if (degiseceksutun <= matrisboyutu)
			{
				cout << "\n Ýþlem devam ediyor :)" << endl;
				break;
			}
			else {
				degiseceksutun > matrisboyutu;
				cout << "\n Seçilen sütun matris boyutundan büyük olmamalý" << endl;
			}
		}


		int x;
		degiseceksatir = degiseceksatir - 1;
		degiseceksutun = degiseceksutun - 1;

		for (int i = 0; i < matrisboyutu; i++) //seçilen satýrla süyunun yerini deðiþtirir
		{
			x = a[degiseceksatir][i];
			a[degiseceksatir][i] = a[i][degiseceksutun];
			a[i][degiseceksutun] = x;
		}

		a[degiseceksatir][degiseceksutun] = a[degiseceksatir][degiseceksatir] + a[degiseceksutun][degiseceksutun];  //uyarý veriyor ama doðru çalýþýyor:)
		//seçilen satýrla sütunun kesiþen elemanýný toplar

		cout << "\n Matris:" << "\n";
		cout << endl;

		cout << "        ";  //matris baþýndaki sütun numaralarýný yazar
		for (int i = 1; i <= matrisboyutu; i++)
		{
			cout << i << "       ";
		}
		cout << endl;

		cout << "        ";  //sütun numaralarýnýn altýndaki çizgi
		for (int i = 1; i <= 7 * matrisboyutu; i++)
		{
			cout << "_";
		}
		cout << "\n";

		for (int i = 0; i < matrisboyutu; i++)
		{
			cout << endl;
			cout << i + 1 << "|";  //matrisin satýr numarasýný belirten satýlarý yazar

			for (int j = 0; j < matrisboyutu; j++)
			{
				cout << "\t" << a[i][j];  //seçilen iþlem yapýlmýþ olarak matrisi ekrana yazar

			}
			cout << endl;
		}
		cout << endl;

		system("PAUSE");
		return EXIT_SUCCESS;
		break;

	case 2:
		int uygulanacaksatir;
		while (true)  //satýr sayýsý istenilen aralýkta oluncaya kadar kullanýcýdan satýr sayýsý ister
		{
			cout << "\n Deðiþtirilmesi istenen satýrý girin";
			cout << "\n -----------------------------------";
			cout << "\n Seçiminiz: ";
			cin >> uygulanacaksatir;


			if (uygulanacaksatir <= matrisboyutu)
			{
				cout << "\n Ýþlem devam ediyor :)" << endl;
				break;
			}
			else {
				uygulanacaksatir > matrisboyutu;
				cout << "\n Seçilen satýr matris boyutundan büyük olmamalý" << endl;
			}
		}

		uygulanacaksatir = uygulanacaksatir - 1;
		int islem;

		for (int i = 0; i < matrisboyutu; i++)
		{
			for (int j = i; j < matrisboyutu; j++)
			{
				if (a[uygulanacaksatir][j] % 2 == 1)  //sayýnýn 2 ile bölümü(modu) 1 yani sayý tek ise sayýnýn yerini deðiþtirir
				{
					islem = a[uygulanacaksatir][i];
					a[uygulanacaksatir][i] = a[uygulanacaksatir][j];
					a[uygulanacaksatir][j] = islem;
				}
			}
		}
		cout << "\n Matris:" << "\n";
		cout << endl;

		cout << "        ";  //matris baþýndaki sütun numaralarýný yazar
		for (int i = 1; i <= matrisboyutu; i++)
		{
			cout << i << "       ";
		}
		cout << endl;

		cout << "        ";  //sütun numaralarýnýn altýndaki çizgi
		for (int i = 1; i <= 7 * matrisboyutu; i++)
		{
			cout << "_";
		}
		cout << "\n";

		for (int i = 0; i < matrisboyutu; i++)
		{
			cout << endl;
			cout << i + 1 << "|";  //matrisin satýr numarasýný belirten satýlarý yazar

			for (int j = 0; j < matrisboyutu; j++)
			{
				cout << "\t" << a[i][j];  //seçilen iþlem yapýlmýþ olarak matrisi ekrana yazar

			}
			cout << endl;
		}
		cout << endl;

		system("PAUSE");
		return EXIT_SUCCESS;
		break;

	case 3:
		int b[25][25];
		int sutunsayisi;

		while (true)  //sütun sayýsý istenilen aralýkta oluncaya kadar kullanýcýdan sütun sayýsý ister
		{
			cout << "\n Ýþlem yapýlacak sütünu seçin";
			cout << "\n ----------------------------";
			cout << "\n Seçiminiz: ";
			cin >> sutunsayisi;

			if (sutunsayisi <= matrisboyutu)
			{
				cout << "\n Ýþlem devam ediyor :)" << endl;
				break;
			}
			else {
				sutunsayisi > matrisboyutu;
				cout << "\n Seçilen sütun matris boyutundan büyük olmamalý" << endl;
			}

		}

		sutunsayisi = sutunsayisi - 1;

		for (int i = 0; i < matrisboyutu; i++)  //seçilen sütunun transpozesini alýr
		{
			for (int j = i; j < matrisboyutu; j++)
			{
				b[j][sutunsayisi] = a[j][sutunsayisi];
				a[j][sutunsayisi] = a[i][sutunsayisi];
				a[i][sutunsayisi] = b[j][sutunsayisi];
			}
		}

		cout << "\n Matris:" << "\n";  //matris baþýndaki sütun numaralarýný yazar

		cout << "        ";
		for (int i = 1; i <= matrisboyutu; i++)
		{
			cout << i << "       ";
		}
		cout << endl;

		cout << "        ";
		for (int i = 1; i <= 7 * matrisboyutu; i++)  //sütun numaralarýnýn altýndaki çizgi
		{
			cout << "_";
		}
		cout << "\n";

		for (int i = 0; i < matrisboyutu; i++)
		{
			cout << endl;
			cout << i + 1 << "|";  //matrisin satýr numarasýný belirten satýlarý yazar

			for (int j = 0; j < matrisboyutu; j++)
			{
				cout << "\t" << a[i][j];  //seçilen iþlem yapýlmýþ olarak matrisi ekrana yazar

			}
			cout << endl;
		}
		cout << endl;

		system("PAUSE");
		return EXIT_SUCCESS;
		break;

	case 4:
		int toplam = 0;
		for (int i = 0; i < matrisboyutu; i++)
		{
			for (int j = 0; j < matrisboyutu; j++)
			{
				toplam = toplam + a[i][j];  //tüm matris elemanlarýný toplar
			}
		}

		for (int i = 0; i < matrisboyutu; i++)
		{
			for (int j = 0; j < matrisboyutu; j++)
			{
				toplam = toplam - a[i][j];  //bulduðu toplamdan matris elemanlarýný sýrayla çýkartýr ve yazar
				a[i][j] = toplam;
			}
		}

		cout << "\n Matris:" << "\n";  //matris baþýndaki sütun numaralarýný yazar

		cout << "        ";
		for (int i = 1; i <= matrisboyutu; i++)
		{
			cout << i << "       ";
		}
		cout << endl;

		cout << "        ";
		for (int i = 1; i <= 7 * matrisboyutu; i++)  //sütun numaralarýnýn altýndaki çizgi
		{
			cout << "_";
		}
		cout << "\n";

		for (int i = 0; i < matrisboyutu; i++)
		{
			cout << endl;
			cout << i + 1 << "|";  //matrisin satýr numarasýný belirten satýlarý yazar

			for (int j = 0; j < matrisboyutu; j++)
			{
				cout << "\t" << a[i][j];  //seçilen iþlem yapýlmýþ olarak matrisi ekrana yazar

			}
			cout << endl;
		}
		cout << endl;

		system("PAUSE");
		return EXIT_SUCCESS;
		break;

	}
}