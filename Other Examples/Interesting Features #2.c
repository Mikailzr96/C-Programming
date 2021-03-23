/*
	{	== 	<%
	}	== 	%>
	
	Yanlýzca fonksiyon parantezleri yerine kullanýlýr.
*/

#include <stdio.h>
#include <locale.h>

void fonk()
<%

	printf("Merhaba Dünya");
	
%>
int main()
<%
	setlocale(LC_ALL,"Turkish");

	fonk();

%>

