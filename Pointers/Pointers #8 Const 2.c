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
	
	int a[4] = { 7,14,21,28 };
	
	const int *p = a;				// const = *p'dýr. --> p ve a deðiþebilir
	
	int*const p1 = a;				// const = p1'dir --> *p1 ve a deðiþebilir.
	
	
	
}
