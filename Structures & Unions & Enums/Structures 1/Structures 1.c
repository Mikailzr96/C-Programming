#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Araba1 {
    char marka[12];
    char model[12];
}arac_bilgileri1;

struct Araba2 {
    char* marka;
    char* model;
};

struct Araba3 {

    char model[12];
    char marka[12];
};
struct Araba3 arac_bilgileri3;

int main()
{

    struct Araba1 arac_bilgileri1 = { .marka = "Volkswagen", .model = "Jetta" };

    printf("%-20s %-20s \n", arac_bilgileri1.marka, arac_bilgileri1.model);

 /*------------------------------------------------------------------------------------------------------------------------------------------*/

    struct Araba2 arac_bilgileri2;
    struct Araba2* aPtr;

    arac_bilgileri2.marka = "Volkswagen";
    arac_bilgileri2.model = "Jetta";
    aPtr = &arac_bilgileri2;
    printf("%-20s %-20s \n", arac_bilgileri2.marka, arac_bilgileri2.model);
    printf("%-20s %-20s \n", aPtr->marka, aPtr->model);
    printf("%-20s %-20s \n", (*aPtr).marka, (*aPtr).model);

 /*------------------------------------------------------------------------------------------------------------------------------------------*/

    strcpy(arac_bilgileri3.marka, "Volkswagen");
    strcpy(arac_bilgileri3.model, "Jetta");

    printf("%-20s %-20s \n", arac_bilgileri3.marka, arac_bilgileri3.model);

}