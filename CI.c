//progran to calculate compound interest
/*
progam to calaculate compound interest
Author:brian Muriuki Joseph
Reg No:CT102/G/22804/24
Date:23/09/2024
*/
//preprocessor directive

#include <stdio.h>


int main(){
	int principal ='p'//%d
	;float time ='t'//%f
	;float rate ='r'//%f
	;float amount ='a'//%f
	;float compoundinterest='ci'//%F
 

	;printf("Enter the principal amount: ");
	scanf("%d",&principal);
	printf("The princpal is \t %d \n",principal);
	
	
	;printf("Enter the time(in years):");
	scanf("%f", &time);
	printf("The time is \t %.1f \n",time);

	
	
	printf("Enter the rate of interest:(%%)\n");
	scanf("%f", &rate);
	printf("The rate is \t %.2f \n",rate);
	
	
	
    amount=principal*pow((1+rate/100),time);
    compoundinterest=amount-principal
	
	;printf("The amount is \t %.2f\n",amount)
	;printf("The compoundinterest \t %.2f\n",compoundinterest )

	
	
;	return 0;
}