#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Belirli int sabitlerinin bir liste halinde tanımlanan karakter dizilerine atanmasına yarayan numaralandırma kavramına 'enum' denir.
	Normal olarak derleyici listedeki sabitlere en soldan başlamak suretiyle birer değer artırarak int değerler atar.
	En solda yer alan değere 0'dan başlayarak numara verilir. 

	Eğer enum Direnc_Renk_Kodlari { Siyah = 2, Kahverengi, Kırmızı, Turuncu = 9, Sarı, Yeşil, Mavi, Mor, Gri, Beyaz }; olsaydı eğer
	Kahrengi 3 , Kırmızı 4 , Sarı 10 , Yeşil 11 ... Beyaz 15 olurdu.
*/

int main()
{

	enum Direnc_Renk_Kodlari { Siyah, Kahverengi, Kırmızı, Turuncu, Sarı, Yeşil, Mavi, Mor, Gri, Beyaz };
	 
	printf("DIRENC RENK KODLARI \n\n");
	printf("Siyah		%d \n", Siyah);
	printf("Kahverengi	%d \n", Kahverengi);
	printf("Kırmızı		%d \n", Kırmızı);
	printf("Turuncu		%d \n", Turuncu);
	printf("Sarı		%d \n", Sarı);
	printf("Yeşil		%d \n", Yeşil);
	printf("Mavi		%d \n", Mavi);
	printf("Mor		%d \n", Mor);
	printf("Gri		%d \n", Gri);
	printf("Beyaz		%d \n", Beyaz);
	

}