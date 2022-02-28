#include<stdio.h>
int main()
{
    int number;                                                     // Initializing the variable
    
    printf("Enter any number\n");                                   // Print message
    scanf("%d",&number);                                            // Get input from user
    
    printf("The Multiplication Table of %d is\n",number);
    
    for (int i = 1; i <= 10; i++)                                   // for loop
    {
        printf("%d X %d = %d\n",number,i,(number*i));              // Condition for multiplication table generation
    }
    
    return 0;
}