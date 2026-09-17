/*Program(16): Write a program to generate the multiplication table using for loop. */
#include<stdio.h>
int main()
{
    int num,i;

    printf("Enter a number:");
    scanf("%d",&num);

    printf("\n Multiplication Table OF %d \n",num);

    for(i=1;i<=10;i++)
        {
            printf("%d*%d=%d\n",num,i,num*i);
        }
    return 0;
}