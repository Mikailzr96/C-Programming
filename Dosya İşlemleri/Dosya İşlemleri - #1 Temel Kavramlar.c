
	Dosya Ýþlemleri  -->

---------------------------------------------------------------------------------------------------------------------------------------------------------------	
	
	Dosya Yazma Ýþlemleri için Kullanýlan Fonksiyonlar	 --->
	
	fputc( ) ve putc()	Dosyaya bir karakter veri kaydeder.				fputc('Karakter',dosya);   // Birden fazla karakter varsa son karakteri esas alýr.
	fputs( ) 			Dosyaya bir karakter dizisi kaydeder.			fputs("Merhaba Dünya",dosya);
	fprintf( )         	Yapýlandýrýlmýþ verileri dosyaya yazar.			fprintf(dosya,"Merhaba Dünya");
	
---------------------------------------------------------------------------------------------------------------------------------------------------------------	

	Dosya Okuma Ýþlemleri için Kullanýlan Fonksiyonlar	--->
		
	fgetc( ) ve getc() 	Dosyadan bir karakter veri okur.				fgetc(dosya);	(Yapýlan iþlem bir karakter deðerine atýlmalý. Karakter = fgetc(dosya); )
	fgets( ) 			Dosyadan bir karakter dizisi okur.				fgets(karakter,50,dosya);	( char karater[50]; )
	fscanf( )          	Yapýlandýrýlmýþ verileri dosyadan okur.			fscanf(dosya,%d-f-s,&veri);	(Örnek Kullanýmý -> fscanf(dosya,%s,karakter); gibi )
	
---------------------------------------------------------------------------------------------------------------------------------------------------------------	
	
	r     Salt okunur		Dosyanýn açýlabilmesi için önceden oluþturulmuþ olmasý gerekir.Bu modda açýlmýþ olan bir dosyaya yazma yapýlmaz. 
	w     Yanlýzca yazma	Dosya diskte kayýtlý olsun veya olmasýn dosya yeniden oluþturulur.Bu modda açýlmýþ olan dosyadan okuma yapýlmaz.
	a     Ekleme			Kayýtlý bir dosyanýn sonuna veri eklemek için açýlýr.Bu modda açýlmýþ olan bir dosyadan okuma yapýlmaz.
	
----------------------------------------------------------------------------------------------------------------------------------------------------------------
	
/*
	
	NOT --->
	
	FEOF || EOF --> Dosyadan okuma iþlemi yapýlýrken, çoðu kez dosyanýn sonunu denetlemek gerekir.
	
	FILE *dosya
	char karakter;
	
	while( !feof(dosya) 	)		-->	Dosyanýn sonuna gelinmediði sürece 
	while( karakter != EOF	)		--> Dosya içerisindeki karakter dizileri sonuna gelinmediði sürece ( EOF deðeri -1 eþittir. (EOF = -1) )
	

----------------------------------------------------------------------------------------------------------------------------------------------------------------

	r+    Okuma ve yazma için bir metin dosyasý açar.
	w+    Okuma ve yazma için bir metin dosyasý oluþturur.
	a+    Okuma ve yazma için bir metin dosyasý oluþturur veya ekleme yapar.
	
	rb    Okuma için bir dosyayý ikili sistemde açar.
	wb    Yazma için ikili sistemde bir dosya oluþturur.
	ab    Ýkili sistemde bir dosyaya ekleme yapar.
	
	
	r+b   Okuma ve yazma için bir ikili sistem dosyasý açar.
	w+b   Okuma ve yazma için bir ikili sistem dosyasý oluþturur.
	a+b   Okuma ve yazma için bir ikili sistem dosyasýna ekleme yapar.
	
--------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	fopen( )          	Bir dosya açar.									dosya = fopen("Dosya_adi.txt","Mod");
	fclose( )         	Bir dosyayý kapatýr.							fclose(dosya);
	fputc( ) ve putc()	Dosyaya bir karakter veri kaydeder.				fputc('Karakter',dosya);
	fputs( ) 			Dosyaya bir karakter dizisi kaydeder.			fputs("Merhaba Dünya",dosya);
	fgetc( ) ve getc() 	Dosyadan bir karakter veri okur.				fgetc(dosya);	(Yapýlan iþlem bir karakter deðerine atýlmalý. Karakter = fgetc(dosya); )
	fgets( ) 			Dosyadan bir karakter dizisi okur.
	fseek( )           	Bir dosyadaki belirli bir byte'ý bulur.
	fprintf( )         	Yapýlandýrýlmýþ verileri dosyaya yazar.			fprintf(dosya,"Merhaba Dünya");
	fscanf( )          	Yapýlandýrýlmýþ verileri dosyadan okur.			fscanf(dosya,%d-f-s,&veri);	(Örnek Kullanýmý -> fscanf(dosya,%s,karakter); gibi )
	feof( )            	Dosya sonu geldiðinde doðru bir deðer verir.
	ferror( )          	Bir hata durumunda doðru bir deðer verir.
	rewind( )          	Dosya aktif konumunu baþa alýr.
	remove( )          	Dosyayý siler.
	fflush( )          	Tampon belleði siler.
	
*/




