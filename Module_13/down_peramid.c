#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int star = n;
    int space = 1;
    for (int i = 1; i <= n; i++)// for printing line
    {

        for(int j=1;j<=space;j++)//for printing space
        {
          printf(" ");

        }
        
        for (int j = 1; j <= star; j++)//for printing star
        {
            printf("*");
        }

        printf("\n");
        star -=2;
        space++;

    }

    return 0;
}