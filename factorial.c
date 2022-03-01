#include<stdio.h>
int main()
{
    int number;                                                 // Initializing variable 'number' to 'int'

    // Initializing variable 'factorial' to 'unsigned long long int' so it can store large positive values
    unsigned long long int factorial = 1;
    
    printf("Enter any number\n");                               // Print message
    scanf("%d",&number);                                        // Get input from user
    
    for (int i = 1; i <= number; i++)                           // for loop
    {
        factorial = factorial*i;                                // Condition for fcatorial generation
    }
    
    printf("The factorial of %d is %llu",number,factorial);     // Print result
    
    return 0;
}