/n marks of students

/*
Author:Brian muriuki joseph
Reg No:CT102/G/22804/24
Date:30/10/2024
*/

#include <stdio.h>
#include <string.h>
#include<stdlib.h>
struct student
{
	
	char name[15];
	int marks;
}student1,student2,student3;

int main(){
	
		 
   FILE*fptr;
   fptr =fopen("C:\\Users\\ASC\\Documents\\Projects\\sample.txt","w");
	
	
    printf("Enter Name: ");
    scanf("%s",&student1.name);
        
    printf("Enter marks: ");
    scanf("%d",&student1.marks);
    
    printf("Enter Name: ");
    scanf("%s",&student2.name);
        
    printf("Enter marks: ");
    scanf("%d",&student2.marks);
    
    printf("Enter Name: ");
    scanf("%s",&student3.name);
        
    printf("Enter marks: ");
    scanf("%d",&student3.marks);
    
      
    
    fprintf(fptr,"\n");


	
	fprintf(fptr,"Name:%s\n",student1.name);
	fprintf(fptr,"Marks:%d\n\n",student1.marks);
    
	fprintf(fptr,"Name:%s\n",student2.name);
	fprintf(fptr,"Marks:%d\n\n",student2.marks);
	
    fprintf(fptr,"Name:%s\n",student3.name);
	fprintf(fptr,"Marks:%d\n\n",student3.marks);
	
	
	
	
	
	}