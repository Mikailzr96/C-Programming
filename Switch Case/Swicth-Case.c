#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	
	char sayi;
	printf("Notunuzu giriniz = ");
	scanf("%d",&sayi);
	
	switch(sayi)
	{
		case 1: 
			printf("Çok Zayýf");
			break;
		case 2:
			printf("Zayýf");
			break;
		case 3:
			printf("Orta");
			break;
		case 4:
			{						
				printf("Ýyi");		// 'case' yapýsý böyle de gösterilebilir. 
				break;
			}						
		case 5:
			printf("Çok Ýyi");
			break;
		default:					// 'case' yapýsýna karþýlýk bir deðer yoksa 'default' taki varsayýlan iþlem yapýlýr.
			printf("Geçersiz Not");
			break;
	}
	
	
	
	
	
	
	
	
	
	
}
