#include<stdio.h>
int main()
{
    int number;                                                                     // Initializing the variable
    
    printf("Enter any number\n");                                                 // Print message
    scanf("%d",&number);                                                          // Get input from user
    
    printf("The cube of %d is : %d",number,(number*number*number));               // Condition for cube generation
    return 0;
}