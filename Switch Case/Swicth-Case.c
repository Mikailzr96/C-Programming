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
			printf("�ok Zay�f");
			break;
		case 2:
			printf("Zay�f");
			break;
		case 3:
			printf("Orta");
			break;
		case 4:
			{						
				printf("�yi");		// 'case' yap�s� b�yle de g�sterilebilir. 
				break;
			}						
		case 5:
			printf("�ok �yi");
			break;
		default:					// 'case' yap�s�na kar��l�k bir de�er yoksa 'default' taki varsay�lan i�lem yap�l�r.
			printf("Ge�ersiz Not");
			break;
	}
	
	
	
	
	
	
	
	
	
	
}
