#include<stdio.h>
int main()
{


    int tk;
    scanf("%d" ,&tk);
    printf("Enter Amount = %d\n" ,tk);
    if(tk >= 100)
    {
        printf("Burger kabo");
    }
    else if(tk >= 50)
    {
        printf("Fuska kabo ");
    }

    else if (tk >= 20)
    {
        printf("Chips Khabo");

    }
    else
    {

        printf("Kisui  kabo nah");
    }
}