//2. Write a C program to add two numbers.
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter 2 numbers\n");
    scanf("%d%d", &a,&b);
    printf("\nThe sum of the numbers %d and %d is %d", a, b, a+b);
    return 0;
}
