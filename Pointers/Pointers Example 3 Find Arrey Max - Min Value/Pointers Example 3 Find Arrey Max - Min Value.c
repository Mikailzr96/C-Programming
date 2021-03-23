#include <stdio.h>
#include <locale.h>

#define		SIZE		10

int find_max_min_value(int* a, int length, int* max, int* min)
{
	*max = *min = *a;

	for (int i = 1; i < length; i++)
	{
		if (a[i] > *max)
			*max = a[i];
		else if (a[i] < *min)
			*min = a[i];
	}
}
int main() 
{
	setlocale(LC_ALL, "Turkish");
	
	int max, min;
	int a[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };

	find_max_min_value(a, SIZE, &max, &min);
	printf("Max Value --> %d \nMin Value --> %d \n",max,min);

}