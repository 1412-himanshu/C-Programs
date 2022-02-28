#include<stdio.h>
int main()
{
    int number;                                                             // Initializing the variable
    
    printf("Enter any number\n");                                           // Print message
    
    scanf("%d",&number);                                                    // Get input from user
    
    printf("The square of %d is : %d",number,(number*number));              // Code for square generation 
    
    return 0;
}