//Simple C program 
/*
Name:Ian Hudson 
Reg:CT100/G/26142/25
Des: Program to compute loan eligibility 
*/

#include<stdio.h>

int main(){

//variable declarations
int age;
float annualincome;

//prompt user to display age
printf("Enter your age");
scanf("%d", &age);

//prompt user to display annualincome 
printf("Enter your annualincome");
scanf("%f", &annualincome);

if(age>= 21&& annualincome>= 21000){
printf("Congratulations, you qualify for the loan.\n");
}

else{
printf("unfortunately, we are unable to offer a loan at this time.\n");
}

return 0;
}