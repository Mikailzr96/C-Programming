#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{ paspas:
  cout<<"-------------   MERHABA HOSGELDINIZ   -------------"<<endl;
  cout<<"1-DETERMINANT\n2-TERSI\n3-TRANSPOZESI\n";
  cout<<"4-TOPLAMA\n5-CIKARMA\n6-CARPMA"<<endl;
  cout<<"Yapacaginiz islemi secin..";int n;cin>>n;
  switch(n)
  {
/*---------------------------------------------------------------------------------------------------------------------------------*/
  	case 1:{ system("cls");
  	int m,n;tekrar4:
	cout<<"Satir sayisini giriniz:";cin>>m;
    cout<<"Sutun sayisini giriniz:";cin>>n;
    if (m==n){
	
    int A[m][n],B[m][n];
    
    cout<<"\n   A  matrisi \n";
	cout<<"   -------\n";
    for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
	      {
        	COORD konum = {4*j+3,5+i};
	        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),konum);
	        cin>>A[i][j];cout<<"\a";	
		  }
	  }
	  float d=1;
	 for(int k=0;k<m-2;k++)
	    {
	     d=d/(pow(A[0][0],m-k-2));
	
	     for(int i=0;i<m-k-1;i++)
    	    {
	         for(int j=0;j<m-k-1;j++)
		     B[i][j]=A[0][0]*A[i+1][j+1]-A[0][j+1]*A[i+1][0];
	 	    }
	     for(int i=0;i<m-k-1;i++)
		    {
		 	for(int j=0;j<m-k-1;j++)
		 	A[i][j]=B[i][j]; } 	}
		 	
			  
		d=d*(A[0][0]*A[1][1]-A[0][1]*A[1][0]);
		cout<<"Determinant \n" << " ----------\n" << d << endl;
}
	else {system("cls");goto tekrar4;} break;}
	
	
/*---------------------------------------------------------------------------------------------------------------------------------*/	
  	case 2:{ 
	system("cls");
	int n;
    cout<<" sayisini giriniz:";cin>>n;
	
   float A[n][n];
    
    cout<<"\n   A  matrisi \n";
	cout<<"   -------\n";
    for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
	      {
        	COORD konum = {4*j+3,4+i};
	        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),konum);
	        cin>>A[i][j];cout<<"\a";
		  }
	  }
	  
	  
    cout<<"\n   Amatrisinin tersi \n";
	cout<<"   ---------\n";
	for(int k=0;k<n;k++)
	   {
		for(int i=0;i<n;i++)
	 	   {
	 	   	for(int j=0;j<n;j++)
	 	   	if(!((i==k)||(j==k))) A[i][j]=A[i][j]-A[i][k]*A[k][j]/A[k][k]; }
		  
		   A[k][k]=-1/A[k][k];
		   for(int i=0;i<n;i++) if (!(i==k)) A[i][k]=A[i][k]*A[k][k];
		   for(int j=0;j<n;j++) if (!(j==k)) A[k][j]=A[k][j]*A[k][k];
	   }	
		 for(int i=0;i<n;i++)
		 {
		 	 for(int j=0;j<n;j++)
		 	{
			COORD konum = {5*j+4,7+i+n};
	        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),konum);
		 	cout<<setprecision(3)<<-A[i][j];
		 
		 }}break;}	
/*---------------------------------------------------------------------------------------------------------------------------------*/
	case 3:
	{ 
		system("cls");
		
   int m,n;
	cout<<"Satir sayisini giriniz:";cin>>m;
    cout<<"Sutun sayisini giriniz:";cin>>n;
    
    int A[m][n];
    
    cout<<"\n   A  matrisi \n";
	cout<<"   -------\n";
    for(int i=1;i<=m;i++)
      {
        for(int j=1;j<=n;j++)
	      {COORD konum = {4*j,4+i};
	        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),konum);
	        cin>>A[i-1][j-1];	
		  }
       }
     int B[n][m];
	 cout<<"\n    transpoze     \n";
	cout<<"   -------\n";
    for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
	      {
	      	B[i][j]=A[j][i];
	      	
        	COORD konum = {4*j+3,8+i+m};
	        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),konum);
	        cout<<B[i][j];	
		  }
	  }
	  	break;}
	
/*---------------------------------------------------------------------------------------------------------------------------------*/
	case 4:
	  {  
	system("cls");
	int m,n;
	cout<<"Satir sayisini giriniz:";cin>>m;
    cout<<"Sutun sayisini giriniz:";cin>>n;
    
    int A[m][n],B[m][n],C[m][n];
    
    cout<<"\n   A  matrisi \n";
	cout<<"   -------\n";
    for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
	      {
        	COORD konum = {4*j+3,5+i};
	        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),konum);
	        cin>>A[i][j];cout<<"\a";	
		  }
       }

   int m1,n1;tekrar:
	cout<<"Satir sayisini giriniz:";cin>>m1;
    cout<<"Sutun sayisini giriniz:";cin>>n1;
    if(m1==m && n1==n)
    {
	 cout<<"\n   B  matrisi \n";
	cout<<"   -------\n";
    for(int i=0;i<m1;i++)
      {
        for(int j=0;j<n1;j++)
	      {
        	COORD konum = {4*j+3,10+i+m};
	        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),konum);
	        cin>>B[i][j];cout<<"\a";	
		  }
	  }	
	  }
	else{
	 cout<<"topma isleminin yapilabilmesi\nicin boyutlar esit olmali"<<endl;goto tekrar;}
   

  
    
    cout<<"\n   C=A+B  matrisi \n";
	cout<<"   -------\n";
    for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
	      {
        	C[i][j]=A[i][j]+B[i][j];
			COORD konum = {4*j+3,13+i+m*2};
	        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),konum);
	        cout<<C[i][j]<<"\a";	
		  }
	  }
break;}
/*---------------------------------------------------------------------------------------------------------------------------------*/
  	case 5:
	{	
	system("cls"); 
	int m,n;
	cout<<"Satir sayisini giriniz:";cin>>m;
    cout<<"Sutun sayisini giriniz:";cin>>n;
    
    int A[m][n],B[m][n],C[m][n];
    
    cout<<"\n   A  matrisi \n";
	cout<<"   -------\n";
    for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
	      {
        	COORD konum = {4*j+3,5+i};
	        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),konum);
	        cin>>A[i][j];cout<<"\a";	
		  }
       }
    system("cls"); 
   int m1,n1;tekrar1:
	cout<<"Satir sayisini giriniz:";cin>>m1;
    cout<<"Sutun sayisini giriniz:";cin>>n1;
    if(m1==m && n1==n)
    {
	 cout<<"\n   B  matrisi \n";
	cout<<"   -------\n";
    for(int i=0;i<m1;i++)
      {
        for(int j=0;j<n1;j++)
	      {
        	COORD konum = {4*j+3,10+i+m};
	        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),konum);
	        cin>>B[i][j];cout<<"\a";	
		  }
	  }	
	  }
	else{	
	 cout<<"topma isleminin yapilabilmesi\nicin boyutlar esit olmali"<<endl;goto tekrar1;}
   

  
    
    cout<<"\n   C=A-B  matrisi \n";
	cout<<"   -------\n";
    for(int i=0;i<m;i++)
        {
        for(int j=0;j<n;j++)
	       {
        	C[i][j]=A[i][j]-B[i][j];
			COORD konum = {4*j+3,13+i+m*2};
	        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),konum);
	        cout<<C[i][j]<<"\a";	
		   }
	    }break;
	}
/*---------------------------------------------------------------------------------------------------------------------------------*/
  	case 6:
	  {
  	system("cls");
	int m,n;tekrar2:
	cout<<"Satir sayisini giriniz:";cin>>m;
    cout<<"Sutun sayisini giriniz:";cin>>n;
    
    int A[m][n];
    
    cout<<"\n   A  matrisi \n";
	cout<<"   -------\n";
    for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
	      {
        	COORD konum = {4*j+3,5+i};
	        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),konum);
	        cin>>A[i][j];cout<<"\a";	
		  }
       }

    int m1,n1;
	cout<<"Satir sayisini giriniz:";cin>>m1;
    cout<<"Sutun sayisini giriniz:";cin>>n1;
    
	int B[m1][n1];

	if(n==m1)
    {
	 cout<<"\n   B  matrisi \n";
	cout<<"   -------\n";
    for(int i=0;i<m1;i++)
      {
        for(int j=0;j<n1;j++)
	      {
        	COORD konum = {4*j+3,10+i+m};
	        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),konum);
	        cin>>B[i][j];	
		  }
	  }	
	}
	else{system("cls");
	 cout<<"carpma isleminin yapilabilmesi icin boyutlar esit olmali"<<endl;
	 system("PAUSE");system("cls");goto tekrar2;}
   

  
    int C[m][n1];
    cout<<"\n   C=A.B  matrisi \n";
	cout<<"   -------\n";
    for(int i=0;i<m;i++)
      {
        for(int j=0;j<n1;j++)
	      {
        	C[i][j]=0;
			for(int k=0;k<m1;k++)
        	{C[i][j]+=A[i][k]*B[k][j];}
			
			COORD konum = {4*j+3,13+i+m*2};
	        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),konum);
	        cout<<C[i][j];	
		  }
	  }
 break;}
  	default :{system("cls");cout<<"ERROR!"<<endl;system("PAUSE");system("cls");goto paspas;
		break;
	  }
}
	return 0;
}

