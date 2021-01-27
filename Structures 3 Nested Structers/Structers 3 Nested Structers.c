#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#pragma pack(1)

typedef struct Bilgisayar {

	struct Anakart
	{
		char a_marka[20];
		char a_boyut[20];
		char a_islemci_soket_tipi[20];
		int a_max_RAM_destegi;
		char a_RAM_tipi[20];
	};
	struct islemci 
	{
		char i_model[20];
		double i_frekans_hizi;
		int i_cekirdek_sayisi;
	};
	struct ekran_karti
	{
		char ea_marka[20];
		char ea_model[20];
		int ea_bellek_kapasitesi;
		int ea_bellek_arayuzu;
	};

}Bilgisayar;

int main()
{
	Bilgisayar bilgiler;

	strcpy(bilgiler.a_boyut, "ATX");
	strcpy(bilgiler.a_islemci_soket_tipi, "AM4");
	strcpy(bilgiler.a_marka, "Asus");
	strcpy(bilgiler.a_RAM_tipi, "DDR4");
	bilgiler.a_max_RAM_destegi = 128;

	strcpy(bilgiler.i_model, "AMD Ryzen 7 5800X");
	bilgiler.i_frekans_hizi = 3.8;
	bilgiler.i_cekirdek_sayisi = 8;

	strcpy(bilgiler.ea_marka, "GIGABAYTE");
	strcpy(bilgiler.ea_model, "GeForce RTX 3090");
	bilgiler.ea_bellek_kapasitesi = 24;
	bilgiler.ea_bellek_arayuzu = 384;

	
	printf("Anakart Bilgileri --> \n\n");
	printf("Marka - %s\nBoyut - %s\nİslemci Soket Tipi - %s\nRAM Tipi - %s\nMax RAM destegi - %d GB\n\n", bilgiler.a_marka, bilgiler.a_boyut,
		bilgiler.a_islemci_soket_tipi, bilgiler.a_RAM_tipi, bilgiler.a_max_RAM_destegi);

	printf("İslemci Bilgileri --> \n\n");
	printf("Modeli - %s\nFrekans Hizi - %.1f GHz\nCekirdek Sayisi - %d\n\n", bilgiler.i_model, bilgiler.i_frekans_hizi, bilgiler.i_cekirdek_sayisi);

	printf("Ekran Karti Bilgileri --> \n\n");
	printf("Model - %s\nModel - %s\nBellek Kapasitesi - %d GB\nBellek Arayuzu %d Bit\n\n", bilgiler.ea_marka, bilgiler.ea_model,
		bilgiler.ea_bellek_kapasitesi, bilgiler.ea_bellek_arayuzu);

}