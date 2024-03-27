#include<stdio.h>

void input(int *a, int *b)
{
    printf("Enter the 2 numbers to be added\n");
    scanf("%d%d", a,b);
    }
void add(int a, int b, int *sum)
{
    *sum=a+b;
}
void output(int a, int b, int sum)
{
    printf("\nThe result of addition of the 2 numbers %d and %d is %d\n", a, b, sum);
}
int main()
{
    int res, a, b;
    input(&a, &b);
    add(a, b, &res);
    output(a, b, res);
    return 0;
    
}