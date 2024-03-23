#include<stdio.h>
void main()
{
    //int a, b, sum=0;
    int input();
    int add(int a, int b);
    void output(int a, int b, int sum);
}

int input()
{
    int a, b;
    printf("Enter 2 numbers\n");
    scanf("%d%d", &a,&b);
    return 0;
}

int add(int a, int b)
{
    int sum=a+b;
    return 0;

}

void output(int a, int b, int sum)
{
    printf("\nThe sum of the numbers %d and %d is %d", a, b, sum);

}