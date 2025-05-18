#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);

    int space=n-1;
    int number= 1;

    for(int i=1;i<=n;i++)
    {

        for(int i=1;i<=space;i++)
        {
            printf(" ");
        }

        for(int i=1;i<=number;i++)
        {
            printf("%d ",i);
        }






        printf("\n");

        space--;
        number++;
    }





    return 0;
}