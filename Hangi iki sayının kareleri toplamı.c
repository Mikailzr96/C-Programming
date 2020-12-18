#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");

	/* Kendi hanelerine tam bölünebilen sayý */
	int TS;
	
	for(int i=1; i<=9; i++)
	{
		for(int j=1; j<=9; j++)
		{
			TS = 10*i + j;
			
			if( TS % i == 0 && TS % j == 0 )
			{
				cout << " " << TS << endl;
			}
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
