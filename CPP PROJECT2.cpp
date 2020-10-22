
#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main()

{
	setlocale(LC_ALL, "turkish");  //T�rk�e karakterler i�in
	int matrisboyutu;
	while (true)
	{
		cout << "Matris boyutu girin: ";  //matris boyutu istenilen aral�kta girilinceye kadar matris boyutu girilmesini ister
		cin >> matrisboyutu;

		if (matrisboyutu <= 25 && matrisboyutu >= 5)
		{
			cout << "��lem devam ediyor :)" << endl;
			break;
		}
		else {
			matrisboyutu > 25 && matrisboyutu < 5;
			cout << "Matris boyutu 25'ten k���k 5'ten b�y�k olmal�" << endl;
		}
	}

	cout << "Matris:" << "\n";

	cout << "        ";  //matris ba��ndaki s�tun numaralar�n� yazar
	for (int i = 1; i <= matrisboyutu; i++)
	{
		cout << i << "       ";
	}
	cout << endl;

	cout << "        ";

	for (int i = 1; i <= 7 * matrisboyutu; i++)  //s�tun numaralar�n�n alt�ndaki �izgi
	{
		cout << "_";
	}
	cout << "\n";

	int a[25][25];

	for (int i = 0; i < matrisboyutu; i++)
	{
		cout << endl;
		cout << i + 1 << "|";  //matrisin sat�r numaras�n� belirten sat�lar� yazar(i for d�ng�s�nde 0'dan ba�layarak tan�mlanm��. Bu nedenle sat�r say�s� 0'dan ba�l�yor. i+1 yazarak d�zelttim)

		for (int j = 0; j < matrisboyutu; j++)  //matris elemanlar�n� rasgele olarak atar
		{
			a[i][j] = rand() % 10;  //10'dan k���k olan say�lar� matrisin elemanlar� olarak atar
			cout << "\t" << a[i][j];  //olu�turulan matrisi ekrana yazar

		}
		cout << endl;
	}

	int sayi;  //switch case yap�s�ndaki se�enekleri say� yoluyla tan�mlad�m. 
	cout << "\n ��LEM SE��N�Z";
	cout << "\n -------------";

	cout << "\n 1= se�ilen sat�r s�tun yer de�i�tir kesi�en elemanlar� topla";
	cout << "\n 2= se�ilen sat�rda tek say�lar� ba�a al �iftleri sona at";
	cout << "\n 3= se�ilen s�tun i�inde elemanlar� ters �evir";
	cout << "\n 4= se�ilen eleman yerine t�m elemanlar� topla say�y� ��kart�p yaz(�al��m�yor)";

	cout << "\n -------------";
	cout << "\n SE��M�N�Z: ";
	cin >> sayi;


	switch (sayi)  //cout i�lemi ile verien talimata g�re i�lem yapan switch case yap�s�
	{
	case 1:  //klavyeden 1 girilirse yap�lacak i�lem
		int degiseceksatir;
		int degiseceksutun;
		while (true)  //sat�r say�s� istenilen aral�kta oluncaya kadar kullan�c�dan sat�r say�s� ister
		{
			cout << "\n De�i�tirilmesi istenen sat�r� girin";
			cout << "\n -----------------------------------";
			cout << "\n Se�iminiz: ";
			cin >> degiseceksatir;


			if (degiseceksatir <= matrisboyutu)
			{
				cout << "\n ��lem devam ediyor :)" << endl;
				break;
			}
			else {
				degiseceksatir > matrisboyutu;
				cout << "\n Se�ilen sat�r matris boyutundan b�y�k olmamal�" << endl;
			}
		}

		while (true)  //s�tun say�s� istenilen aral�kta oluncaya kadar kullan�c�dan sat�r say�s� ister
		{
			cout << "\n De�i�tirilmesi istenen s�tunu girin";
			cout << "\n -----------------------------------";
			cout << "\n Se�iminiz: ";
			cin >> degiseceksutun;


			if (degiseceksutun <= matrisboyutu)
			{
				cout << "\n ��lem devam ediyor :)" << endl;
				break;
			}
			else {
				degiseceksutun > matrisboyutu;
				cout << "\n Se�ilen s�tun matris boyutundan b�y�k olmamal�" << endl;
			}
		}


		int x;
		degiseceksatir = degiseceksatir - 1;
		degiseceksutun = degiseceksutun - 1;

		for (int i = 0; i < matrisboyutu; i++) //se�ilen sat�rla s�yunun yerini de�i�tirir
		{
			x = a[degiseceksatir][i];
			a[degiseceksatir][i] = a[i][degiseceksutun];
			a[i][degiseceksutun] = x;
		}

		a[degiseceksatir][degiseceksutun] = a[degiseceksatir][degiseceksatir] + a[degiseceksutun][degiseceksutun];  //uyar� veriyor ama do�ru �al���yor:)
		//se�ilen sat�rla s�tunun kesi�en eleman�n� toplar

		cout << "\n Matris:" << "\n";
		cout << endl;

		cout << "        ";  //matris ba��ndaki s�tun numaralar�n� yazar
		for (int i = 1; i <= matrisboyutu; i++)
		{
			cout << i << "       ";
		}
		cout << endl;

		cout << "        ";  //s�tun numaralar�n�n alt�ndaki �izgi
		for (int i = 1; i <= 7 * matrisboyutu; i++)
		{
			cout << "_";
		}
		cout << "\n";

		for (int i = 0; i < matrisboyutu; i++)
		{
			cout << endl;
			cout << i + 1 << "|";  //matrisin sat�r numaras�n� belirten sat�lar� yazar

			for (int j = 0; j < matrisboyutu; j++)
			{
				cout << "\t" << a[i][j];  //se�ilen i�lem yap�lm�� olarak matrisi ekrana yazar

			}
			cout << endl;
		}
		cout << endl;

		system("PAUSE");
		return EXIT_SUCCESS;
		break;

	case 2:
		int uygulanacaksatir;
		while (true)  //sat�r say�s� istenilen aral�kta oluncaya kadar kullan�c�dan sat�r say�s� ister
		{
			cout << "\n De�i�tirilmesi istenen sat�r� girin";
			cout << "\n -----------------------------------";
			cout << "\n Se�iminiz: ";
			cin >> uygulanacaksatir;


			if (uygulanacaksatir <= matrisboyutu)
			{
				cout << "\n ��lem devam ediyor :)" << endl;
				break;
			}
			else {
				uygulanacaksatir > matrisboyutu;
				cout << "\n Se�ilen sat�r matris boyutundan b�y�k olmamal�" << endl;
			}
		}

		uygulanacaksatir = uygulanacaksatir - 1;
		int islem;

		for (int i = 0; i < matrisboyutu; i++)
		{
			for (int j = i; j < matrisboyutu; j++)
			{
				if (a[uygulanacaksatir][j] % 2 == 1)  //say�n�n 2 ile b�l�m�(modu) 1 yani say� tek ise say�n�n yerini de�i�tirir
				{
					islem = a[uygulanacaksatir][i];
					a[uygulanacaksatir][i] = a[uygulanacaksatir][j];
					a[uygulanacaksatir][j] = islem;
				}
			}
		}
		cout << "\n Matris:" << "\n";
		cout << endl;

		cout << "        ";  //matris ba��ndaki s�tun numaralar�n� yazar
		for (int i = 1; i <= matrisboyutu; i++)
		{
			cout << i << "       ";
		}
		cout << endl;

		cout << "        ";  //s�tun numaralar�n�n alt�ndaki �izgi
		for (int i = 1; i <= 7 * matrisboyutu; i++)
		{
			cout << "_";
		}
		cout << "\n";

		for (int i = 0; i < matrisboyutu; i++)
		{
			cout << endl;
			cout << i + 1 << "|";  //matrisin sat�r numaras�n� belirten sat�lar� yazar

			for (int j = 0; j < matrisboyutu; j++)
			{
				cout << "\t" << a[i][j];  //se�ilen i�lem yap�lm�� olarak matrisi ekrana yazar

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

		while (true)  //s�tun say�s� istenilen aral�kta oluncaya kadar kullan�c�dan s�tun say�s� ister
		{
			cout << "\n ��lem yap�lacak s�t�nu se�in";
			cout << "\n ----------------------------";
			cout << "\n Se�iminiz: ";
			cin >> sutunsayisi;

			if (sutunsayisi <= matrisboyutu)
			{
				cout << "\n ��lem devam ediyor :)" << endl;
				break;
			}
			else {
				sutunsayisi > matrisboyutu;
				cout << "\n Se�ilen s�tun matris boyutundan b�y�k olmamal�" << endl;
			}

		}

		sutunsayisi = sutunsayisi - 1;

		for (int i = 0; i < matrisboyutu; i++)  //se�ilen s�tunun transpozesini al�r
		{
			for (int j = i; j < matrisboyutu; j++)
			{
				b[j][sutunsayisi] = a[j][sutunsayisi];
				a[j][sutunsayisi] = a[i][sutunsayisi];
				a[i][sutunsayisi] = b[j][sutunsayisi];
			}
		}

		cout << "\n Matris:" << "\n";  //matris ba��ndaki s�tun numaralar�n� yazar

		cout << "        ";
		for (int i = 1; i <= matrisboyutu; i++)
		{
			cout << i << "       ";
		}
		cout << endl;

		cout << "        ";
		for (int i = 1; i <= 7 * matrisboyutu; i++)  //s�tun numaralar�n�n alt�ndaki �izgi
		{
			cout << "_";
		}
		cout << "\n";

		for (int i = 0; i < matrisboyutu; i++)
		{
			cout << endl;
			cout << i + 1 << "|";  //matrisin sat�r numaras�n� belirten sat�lar� yazar

			for (int j = 0; j < matrisboyutu; j++)
			{
				cout << "\t" << a[i][j];  //se�ilen i�lem yap�lm�� olarak matrisi ekrana yazar

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
				toplam = toplam + a[i][j];  //t�m matris elemanlar�n� toplar
			}
		}

		for (int i = 0; i < matrisboyutu; i++)
		{
			for (int j = 0; j < matrisboyutu; j++)
			{
				toplam = toplam - a[i][j];  //buldu�u toplamdan matris elemanlar�n� s�rayla ��kart�r ve yazar
				a[i][j] = toplam;
			}
		}

		cout << "\n Matris:" << "\n";  //matris ba��ndaki s�tun numaralar�n� yazar

		cout << "        ";
		for (int i = 1; i <= matrisboyutu; i++)
		{
			cout << i << "       ";
		}
		cout << endl;

		cout << "        ";
		for (int i = 1; i <= 7 * matrisboyutu; i++)  //s�tun numaralar�n�n alt�ndaki �izgi
		{
			cout << "_";
		}
		cout << "\n";

		for (int i = 0; i < matrisboyutu; i++)
		{
			cout << endl;
			cout << i + 1 << "|";  //matrisin sat�r numaras�n� belirten sat�lar� yazar

			for (int j = 0; j < matrisboyutu; j++)
			{
				cout << "\t" << a[i][j];  //se�ilen i�lem yap�lm�� olarak matrisi ekrana yazar

			}
			cout << endl;
		}
		cout << endl;

		system("PAUSE");
		return EXIT_SUCCESS;
		break;

	}
}