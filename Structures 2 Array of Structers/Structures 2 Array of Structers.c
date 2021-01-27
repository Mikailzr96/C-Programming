#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma pack(1)

#define			SIZE		3

typedef struct Student {
	char name[20];
	char last_name[20];
	int grade;
}Student;

int main()
{
	Student s1;
	Student primary_school_student[SIZE] = { {"Ahmet","Ulusoy",95},{"Hasan","Yilmaz",96},{"Kahraman","Aslan",81} };

	for (int i = 0; i < SIZE; i++)
		printf("%-20s %-20s %-20d \n", primary_school_student[i].name, primary_school_student[i].last_name, primary_school_student[i].grade);

}
