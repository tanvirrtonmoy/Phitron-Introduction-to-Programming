#include<stdio.h>


void odd_even(int a)
{
    if(a % 2 == 0)
    {
        printf("even =%d",a);
    }

    else
    {
        printf("odd-->%d",a);
    }
}

int main()
{
    int x;
    scanf("%d",&x);
    odd_even(x);



    return 0;
}