#include<stdio.h>
int main()
{
    int age;                                                        // Initializing the variables
    
    printf("Enter your age\n");                                     // Print message
    scanf("%d",&age);                                               // Get age input from user
    
    if (age>=18)                                                    // if-else block
    {
        printf("You are eligible to vote.....");                    // prints when if block is True
    }
    
    else
    {
        printf("Sorry, You are not eligible.....");                 // prints when if block is False
    }
    
    return 0;
}