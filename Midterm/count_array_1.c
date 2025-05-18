#include <stdio.h>
int main()
{

    int N;
    scanf("%d", &N);

    int A[N];

    int count_2 = 0, count_3 = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (A[i] % 2 == 0)
        {
            count_2++;
        }
        else if (A[i] % 3 == 0)
        {
            count_3++;
        }
        else if (A[i] % 2 == 0 && A[i] % 3 == 0)
        {
            count_2++;
        }
    }

    printf("%d %d", count_2, count_3);

    return 0;
}