#include <stdio.h>


int main()
{

#define		WINDOWS_10

#ifdef WINDOWS_10							// if defined(WINDOWS_10) = ifdef WINDOWS_10 --> Eğer WİNDOWS 10 ise 
	printf("İsletim sitemi W10'dur \n");
#else
	printf("Baska bir isletim sistemi \n");

#endif // WINDOWS_10

/*--------------------------------------------------------------------------------------------------------------*/

#define		STM32F407

#if defined(STM32F407)		
	printf("Mikrodenetleyici STM32F407 \n");
#else
	printf("Baska bir mikrodenetleyici \n");

#endif // STM32F407

/*--------------------------------------------------------------------------------------------------------------*/

#define		MAVİ

#ifndef MAVİ								// if !defined(MAVI) = ifndef MAVI --> Eğer mavi değilse 
	printf("Mavi degil \n");
#else
	printf("Mavi \n");

#endif // MAVİ	



}

