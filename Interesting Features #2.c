/*
	{	== 	<%
	}	== 	%>
	
	Yanl�zca fonksiyon parantezleri yerine kullan�l�r.
*/

#include <stdio.h>
#include <locale.h>

void fonk()
<%

	printf("Merhaba D�nya");
	
%>
int main()
<%
	setlocale(LC_ALL,"Turkish");

	fonk();

%>

