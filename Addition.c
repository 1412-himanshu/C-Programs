#include <stdio.h>
int main()
{
    int num1,num2,result;                                            // Initializing the variables
    
    printf("Enter any two numbers\n");                               // Print message
    
    printf("Enter first number : \n");
    scanf("%d",&num1);                                            // Input first number
    
    printf("Enter second number : \n");
    scanf("%d",&num2);                                           // Input second number
    
    result = num1 + num2;                                       // Addition operation
    
    printf("The addition of given numbers is : %d",result);     // Result Generation
    return 0;
}