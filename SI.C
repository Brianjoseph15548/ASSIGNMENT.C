//program to calculate simple interest
/*
program to calculate simple interest
Author:Brian Muriuki Joseph
Reg No: CT102/G/22804/24
Date:23/9/2024
*/

#include <stdio.h>

int main(){
	int principal ='p'//%d
	;float time ='t';//%f
	float rate ='r';//%f
    float simpleInterest = 'SI';//%f

    printf("Enter the principal amount: ");
    scanf("%d", &principal);
    

    printf("Enter the time (in years): ");
    scanf("%.1f", &time);
    

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("The rate is \t %.2f \n",rate);
    
    simpleInterest = (principal * time * rate) / 100;

    
    printf("The simple interest is: %.3f\n", simpleInterest);

    return 0;
}
