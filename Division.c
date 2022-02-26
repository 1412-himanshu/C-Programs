#include<stdio.h>
int main()
{
    float num1,num2,result;                                             // Initializing the variables
    
    printf("Division of numbers\n");                                     // Print message
    
    printf("Enter first number\n");
    scanf("%f",&num1);                                                   // Input first number
    
    printf("Enter second number\n");
    scanf("%f",&num2);                                                   // Input second number
    
    result = num1 / num2;                                               // Division operation
    
    printf("The division of the given numbers is : %f",result);         // Result Generation
    return 0;
}