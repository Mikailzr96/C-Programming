#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
using namespace std;

void Goster();

int Degerler[24] = { 1,2,5,10,25,50,100,200,300,400,500,750,10000,20000,30000,40000,50000,100000,150000,200000,250000,500000,500000,500000 };

int const SABITDEGERLER[24] = { 1,2,5,10,25,50,100,200,300,400,500,750,10000,20000,30000,40000,50000,100000,150000,200000,250000,500000,500000,500000 };

int kalanParalar[24];
int kutuSayisi = 24;
int acikMi[24];

int anakutu, kalankutu, teklif, varim, kazandi, tur, secilecek, acilacak, toplam, temp, rastgele; 

int main()
{
	
setlocale(LC_ALL,"Turkish");	// Türkçe karakterler için kullanýlan kod
cout << "\t\t\tP R O G R A M L A M A  D E R S Ý " << endl;
cout << "VARMISIN YOKMUSUN YARIÞMASINA HOSGELDÝNÝZ----> " << endl;
cout << endl;

	srand(time(0));

	for (int i = 0; i < kutuSayisi; i++)
	{
		acikMi[i] = 0;
		kalanParalar[i] = 1;
	}

	for (int i = 0; i < kutuSayisi; i++)
	{
		int rastgele = rand() % kutuSayisi;
		int temp = Degerler[i];
		Degerler[i] = Degerler[rastgele];
		Degerler[rastgele] = temp;
	}

	anakutu = 0;
	while (!(anakutu <= kutuSayisi && anakutu > 0))
	{
		printf("\n Kendi Kutunuzu Seciniz:  ");
		scanf("%d", &anakutu);
	}
	printf("\n Seçtiginiz Kutu: %d", anakutu);
	anakutu--;


	acikMi[anakutu] = 1;
	teklif = 0;
	varim = 0;
	kalankutu = kutuSayisi - 2;
	kazandi = 0;
	tur = 1;
	secilecek = 6;


	while (kalankutu != 0 && varim == 0)
	{
		printf("\n\n[  Tur: %d   (Secilecek Kutu Sayýsý: %d)	]\n", tur, secilecek);
		tur++;
		Goster();

		for (int i = 0; i < secilecek;)//sadece gecerli bi kutu secildiyse sradaki i'ye gecilecek (i döngü içindeki if'te arttýrýldý)
		{
			printf("\n\n---------------------------------------\n Acýlacak Kutu: ");
			scanf("%d", &acilacak);
			acilacak -= 1;

			if (acilacak != anakutu && acilacak < kutuSayisi && acilacak >= 0)
			{
				if (acikMi[acilacak] == 0)
				{
					acikMi[acilacak] = 1;
					for (int i = 0; i < 24; i++)
					{
						if (SABITDEGERLER[i] == Degerler[acilacak])
						{

							if (kalanParalar[i] == 0)
								continue;					
							kalanParalar[i] = 0;
							break;
						}
					}

					Goster();
					printf("\n\n%d Numaralý Kutuyu Sectiniz >> Kutudan Cýkan: %d\n", acilacak + 1, Degerler[acilacak]);

					printf("\n");
					i++;
				}
				else
				{
					printf("Bu Kutu Daha Önce Açýldý");
				}
			}
			else
			{
				if (acilacak == anakutu)
					printf("Kendi Kutunuzu Secemezsiniz");
				else
					printf("Gecersiz Kutu Sayýsý");
			}
		}

		kalankutu -= secilecek;
		if (secilecek > 1)
			--secilecek;

		
		toplam = 0;
		int adet = 0;
		for (int i = 0; i < 24; i++)
		{
			if (acikMi[i] == 0)
			{
				toplam += Degerler[i];
				adet++;
			}
		}
		toplam += Degerler[anakutu];
		adet++;
		teklif = toplam / adet;
		teklif = teklif * tur / 8;

		char cevap = 'x';
		if (tur < 8)
		{
			printf("\n------------------------------------------------");
			printf("\n**	Hamdi beyin teklifi:  %10d TL	  **", teklif);
			printf("\n**          Var mýsýn, yok musun?  [e/h]          **");
			printf("\n--------------------------------------------------\n");
			cevap = _getch();
			if (cevap == 'e' || cevap == 'E')
			{
				varim = 1;
				kazandi = teklif;
				break;
			}
			else
			{
				varim = 0;
				kazandi = anakutu;
			}
		}
		cevap = 'x';
		if (tur == 8)
		{


			printf("\n-------------------------------------------------");
			printf("\n--	Hamdi beyin teklifi:  %10d TL	  --", teklif);
			printf("\n--       Kendi kutun mu teklif mi? [e/h]        --");
			printf("\n----------------------------------------------------\n");
			cevap = _getch();
			if (cevap == 'e' || cevap == 'E')
			{
				varim = 0;
				kazandi = anakutu;
				break;
			}
			else
			{
				varim = 1;
				kazandi = teklif;
				break;
			}

		}

	}

	if (varim == 0)
	{
		printf("\n\n Kendi Kutunuzdan Kazandýgýnýz: %d", Degerler[anakutu]);
	}
	else
	{
		printf("\n\nTekliften Kazandýgýnýz: %d", teklif);
	}


	printf("\n\n Oynadýgýnýz Ýçin Tesekkürler");
	_getch();
}

void Goster()
{
	printf("\n------------------{ Kalan Paralar }------------------\n\n");

	for (int i = 0; i < kutuSayisi / 2; i++)
	{
		if (kalanParalar[i] == 1)
		{
			printf("	[%6d TL]	", SABITDEGERLER[i]);
		}
		else
			printf("	[---------]	");

		printf("	");
		if (kalanParalar[i + 12] == 1)
		{
			printf("[%6d TL]	", SABITDEGERLER[i + 12]);
		}
		else
			printf("[---------]	");


		printf("\n");
	}
	printf("\n\n---------------------{ Kutular }---------------------\n");

	for (int i = 0; i < kutuSayisi; i++)
	{
		if (i % 5 == 0)
			printf("\n");
		if (acikMi[i] == 0)
			printf("   [%2d] ", i + 1);
		else
			printf("   [--] ");
	}

	printf("\n");
}

