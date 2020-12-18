
	Dosya ��lemleri  -->

---------------------------------------------------------------------------------------------------------------------------------------------------------------	
	
	Dosya Yazma ��lemleri i�in Kullan�lan Fonksiyonlar	 --->
	
	fputc( ) ve putc()	Dosyaya bir karakter veri kaydeder.				fputc('Karakter',dosya);   // Birden fazla karakter varsa son karakteri esas al�r.
	fputs( ) 			Dosyaya bir karakter dizisi kaydeder.			fputs("Merhaba D�nya",dosya);
	fprintf( )         	Yap�land�r�lm�� verileri dosyaya yazar.			fprintf(dosya,"Merhaba D�nya");
	
---------------------------------------------------------------------------------------------------------------------------------------------------------------	

	Dosya Okuma ��lemleri i�in Kullan�lan Fonksiyonlar	--->
		
	fgetc( ) ve getc() 	Dosyadan bir karakter veri okur.				fgetc(dosya);	(Yap�lan i�lem bir karakter de�erine at�lmal�. Karakter = fgetc(dosya); )
	fgets( ) 			Dosyadan bir karakter dizisi okur.				fgets(karakter,50,dosya);	( char karater[50]; )
	fscanf( )          	Yap�land�r�lm�� verileri dosyadan okur.			fscanf(dosya,%d-f-s,&veri);	(�rnek Kullan�m� -> fscanf(dosya,%s,karakter); gibi )
	
---------------------------------------------------------------------------------------------------------------------------------------------------------------	
	
	r     Salt okunur		Dosyan�n a��labilmesi i�in �nceden olu�turulmu� olmas� gerekir.Bu modda a��lm�� olan bir dosyaya yazma yap�lmaz. 
	w     Yanl�zca yazma	Dosya diskte kay�tl� olsun veya olmas�n dosya yeniden olu�turulur.Bu modda a��lm�� olan dosyadan okuma yap�lmaz.
	a     Ekleme			Kay�tl� bir dosyan�n sonuna veri eklemek i�in a��l�r.Bu modda a��lm�� olan bir dosyadan okuma yap�lmaz.
	
----------------------------------------------------------------------------------------------------------------------------------------------------------------
	
/*
	
	NOT --->
	
	FEOF || EOF --> Dosyadan okuma i�lemi yap�l�rken, �o�u kez dosyan�n sonunu denetlemek gerekir.
	
	FILE *dosya
	char karakter;
	
	while( !feof(dosya) 	)		-->	Dosyan�n sonuna gelinmedi�i s�rece 
	while( karakter != EOF	)		--> Dosya i�erisindeki karakter dizileri sonuna gelinmedi�i s�rece ( EOF de�eri -1 e�ittir. (EOF = -1) )
	

----------------------------------------------------------------------------------------------------------------------------------------------------------------

	r+    Okuma ve yazma i�in bir metin dosyas� a�ar.
	w+    Okuma ve yazma i�in bir metin dosyas� olu�turur.
	a+    Okuma ve yazma i�in bir metin dosyas� olu�turur veya ekleme yapar.
	
	rb    Okuma i�in bir dosyay� ikili sistemde a�ar.
	wb    Yazma i�in ikili sistemde bir dosya olu�turur.
	ab    �kili sistemde bir dosyaya ekleme yapar.
	
	
	r+b   Okuma ve yazma i�in bir ikili sistem dosyas� a�ar.
	w+b   Okuma ve yazma i�in bir ikili sistem dosyas� olu�turur.
	a+b   Okuma ve yazma i�in bir ikili sistem dosyas�na ekleme yapar.
	
--------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	fopen( )          	Bir dosya a�ar.									dosya = fopen("Dosya_adi.txt","Mod");
	fclose( )         	Bir dosyay� kapat�r.							fclose(dosya);
	fputc( ) ve putc()	Dosyaya bir karakter veri kaydeder.				fputc('Karakter',dosya);
	fputs( ) 			Dosyaya bir karakter dizisi kaydeder.			fputs("Merhaba D�nya",dosya);
	fgetc( ) ve getc() 	Dosyadan bir karakter veri okur.				fgetc(dosya);	(Yap�lan i�lem bir karakter de�erine at�lmal�. Karakter = fgetc(dosya); )
	fgets( ) 			Dosyadan bir karakter dizisi okur.
	fseek( )           	Bir dosyadaki belirli bir byte'� bulur.
	fprintf( )         	Yap�land�r�lm�� verileri dosyaya yazar.			fprintf(dosya,"Merhaba D�nya");
	fscanf( )          	Yap�land�r�lm�� verileri dosyadan okur.			fscanf(dosya,%d-f-s,&veri);	(�rnek Kullan�m� -> fscanf(dosya,%s,karakter); gibi )
	feof( )            	Dosya sonu geldi�inde do�ru bir de�er verir.
	ferror( )          	Bir hata durumunda do�ru bir de�er verir.
	rewind( )          	Dosya aktif konumunu ba�a al�r.
	remove( )          	Dosyay� siler.
	fflush( )          	Tampon belle�i siler.
	
*/




