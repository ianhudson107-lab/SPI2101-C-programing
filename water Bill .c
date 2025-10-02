/*
Name:Ian Hudson 
Reg:CT100/26142/25
Description:Water bill
31/09
*/
#include<stdio.h>

int main() {
    int units;
    double bill;
    
    //Prompt user for unit consumed
    printf("Enter number of water units consumed;");
    printf("%d", &units);
    
    //Calculate the bill using if -else-if-else
    if(units<=30){
       bill=units*50.0;
    }
    else if(units<=60){
       bill=(30*50.0)+(units-30)*75.0;
    }
    else{
       bill=(30*50.0)+(30*75.0)+(units-60)-100.0;
    }
    
    // Display results
    printf("Total water bill kes %.2f\n",bill);
    
    return 0;
} 