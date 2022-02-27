#include<stdio.h>
int main()
{
    int marks;                                                              // Initializing the variables
    
    printf("Enter your marks\n");                                           // Print message
    scanf("%d",&marks);                                                     // Get input of marks from user
    
    if (marks>85 && marks<=100)                                             // && -> AND operator
    {
        printf("Congratulations !! You secured A+ Grade......");            // if block
    }
    
    else if (marks>60 && marks<=85)
    {
        printf("You secured A Grade......");                                // else-if block
    }
    
    else if (marks>40 && marks<=60)
    {
        printf("You secured A Grade......");                                // else-if block                         
    }
    
    else if (marks>30 && marks<=40)
    {
        printf("You secured C Grade......");                                // else-if block
    }
    
    else
    {
        printf("You have Failed......");                                    // else block
    }
    
    return 0;
}