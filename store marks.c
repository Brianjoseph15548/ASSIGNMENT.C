//program to store marks
/*
name:Brian muriuki joseph
Reg:CT102/G/22804/24
*/
#include<stdio.h>
#include <stdlib.h>
#include <string.h> 
struct student
{

	char name[15];
	float marks;
	} student1, student2, student3, student4,student5;

int main()
{
	FILE*fptr;
	fptr = fopen("C:\\Users\\User\\Documents\\Projects\\sample.txt","w");
	strcpy(student1.name, "foden");
	student1.marks=70.5;
	strcpy(student2.name, "halaand");
	student2.marks=95;
	strcpy(student3.name,"vin");
	student3.marks=50;
	strcpy(student4.name, "KDB");
	student4.marks=63;
	strcpy(student5.name, "rodri");
	student5.marks=90;
	

	fprintf(fptr,"%s \n", student1.name);
	fprintf(fptr,"%.1f \n \n", student1.marks);
	fprintf(fptr,"%s \n", student2.name);
	fprintf(fptr,"%.1f \n \n", student2.marks);
	fprintf(fptr,"%s \n", student3.name);
	fprintf(fptr,"%.1f \n \n", student3.marks);
	fprintf(fptr,"%s \n", student4.name);
	fprintf(fptr,"%.1f \n \n", student4.marks);
	fprintf(fptr,"%s \n", student5.name);
	fprintf(fptr,"%.1f \n \n", student5.marks);
	fclose(fptr);
	
	return 0;
}

	
	
	
	