#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int star = 1;
    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {

        for (int i = 1; i <= space; i++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }

        

        space--;
        star += 2;
                printf("\n");
    }

    

    int space_1 = 0;
    int star_1 = 2*n-1;

    for (int i = 1; i <= n; i++)
    {

        for (int i = 1; i <= space_1; i++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star_1; j++)
        {
            printf("*");
        }

        printf("\n");

        space_1++;
        star_1 -= 2;
    }

    return 0;
}