#include <stdio.h>
#include <locale.h>

/*
	int *const p = &x;										p is a constat to pointter int 
	int const *p = &x; == 	const int *p = &x;				p is a pointer to constant int	
	
	const neyin �n�ne gelmi�se const o olur. --> *const p durumunda const p'nin �n�ne geldi�inden const = p'dir.Ayn� �ekilde const *p durumunda da const = *p'dir.
		
	int const const *p = &x; == const int const *2 = &x 
*/
int main()
{
	setlocale(LC_ALL, "Turkish");
	
	
	int x = 20, y = 40;
	
	
	int *const p = &x;		// const = p'dir.      p de�i�emez --> p ve x de�i�ebilir.		  p de�i�keni hep &x'i g�stersin, x'in artmas� p de�i�kenini de�i�tiremez -->
// 																				-->	��nk� p yine x'i g�sterecektir. X artt� diye farkl� bir de�i�ken g�stermeyecektir.

	int const *p1 = &y;		// const = *p1'dir	 *p1 de�i�emez --> p1 ve y de�i�ebilir.  	*p1 de�i�keni hep &y'i g�stersin.O y�zden (*p1) de�i�ken de�i�tirelemez.
	
	
	const int *const p2 = &x;		//	const = p2 && const = *p2'dir. --> Sadece x de�i�ebilir.
	
		
}
