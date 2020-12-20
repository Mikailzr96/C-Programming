#include <stdio.h>
#include <locale.h>

/*
	int *const p = &x;										p is a constat to pointter int 
	int const *p = &x; == 	const int *p = &x;				p is a pointer to constant int	
	
	const neyin önüne gelmiþse const o olur. --> *const p durumunda const p'nin önüne geldiðinden const = p'dir.Ayný þekilde const *p durumunda da const = *p'dir.
		
	int const const *p = &x; == const int const *2 = &x 
*/
int main()
{
	setlocale(LC_ALL, "Turkish");
	
	
	int x = 20, y = 40;
	
	
	int *const p = &x;		// const = p'dir.      p deðiþemez --> p ve x deðiþebilir.		  p deðiþkeni hep &x'i göstersin, x'in artmasý p deðiþkenini deðiþtiremez -->
// 																				-->	çünkü p yine x'i gösterecektir. X arttý diye farklý bir deðiþken göstermeyecektir.

	int const *p1 = &y;		// const = *p1'dir	 *p1 deðiþemez --> p1 ve y deðiþebilir.  	*p1 deðiþkeni hep &y'i göstersin.O yüzden (*p1) deðiþken deðiþtirelemez.
	
	
	const int *const p2 = &x;		//	const = p2 && const = *p2'dir. --> Sadece x deðiþebilir.
	
		
}
