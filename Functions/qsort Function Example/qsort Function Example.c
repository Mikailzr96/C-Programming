#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define		SIZE		6

typedef struct Student {
	char name[20];
	char surname[20];
	int no;
}Student;

int cmp(const void* vp1, const void* vp2) {
	const Student* p1 = (const Student*)vp1;
	const Student* p2 = (const Student*)vp2;
	return strcmp(p1->name, p2->name);
}

int main()
{
	Student MathNote[SIZE] = {
		{"Zeynep","Kahraman",73},
		{"Riza","Yilmaz",76},
		{"Ali","Sever",83},
		{"Tugce","Yesil",95},
		{"Fatma","Sevmez",65},
		{"Halil","ulusoy",100}
	};

	qsort(MathNote, SIZE, sizeof(Student), cmp);

	for (int i = 0; i < SIZE; i++)
		printf("%s		%s		%d \n", MathNote[i].name, MathNote[i].surname, MathNote[i].no);


}