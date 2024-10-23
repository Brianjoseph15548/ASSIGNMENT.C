//Arrays in C-2D arrays
/*
program for 2D arrys
Auther:Brian muriuki joseph
Reg No:CT102/G/22804/24
Date:17/10/2024
*/
//preprocessor directive-printf(),scanf() 
#include<stdio.h>
int main (){
	int i,j;
	int marks[2][3]={{16,33,60},{35,74,41}};
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("marks[%d][%d]=%d\n",i,j, marks[i][j]);
			}
			
}
	return 0;
}
