#include<stdio.h>
int main()
{
    int number;                                                                 // Initializing variable number to 'int'

// Initializing variable factorial to 'unsigned long long int' so it can store a large value
    unsigned long long int factorial=1;

    
    printf("Enter any number\n");                                           // Print message
    scanf("%d",&number);                                                    // Get input of number from user
    
    for (int i = 1; i <= number; i++)                                       // for loop
    {
        factorial = factorial*i;                                            // Condition for finding the factorial of number
    }
    
    printf("The factorial of %d is %llu",number,factorial);                   // Print result 
    
    return 0;  
}