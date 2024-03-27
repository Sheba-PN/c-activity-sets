#include<stdio.h>
int input()
{
    int num;
    printf("Enter the number to be added\n");
    scanf("%d", &num);
    return num;
}

int add(int a, int b)
{
    int sum;
    sum=a+b;
    return sum;

}

void output(int a, int b, int sum)
{
    printf("\nThe sum of the numbers %d and %d is %d\n", a, b, sum);

}

int main()
{
    int res, a, b;
    a=input();
    b=input();
    res=add(a, b);
    output(a, b, res);
    return 0;
}





