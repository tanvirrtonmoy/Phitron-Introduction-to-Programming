#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);

    for (int i = 1; i <= x; i++)
    {

        int N;
        scanf("%d", &N);

        do
        {
            printf("%d ", N % 10);
            N /= 10;
        } while (N != 0);
        printf("\n");
    }

    return 0;
}