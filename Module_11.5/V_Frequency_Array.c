#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int M;
    scanf("%d", &M);

    int frequency_array[M];

    for (int i = 0; i <= M; i++)
    {
        frequency_array[i] = 0;
    }

    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; i++)
    {
        int value = A[i];
        if (value >= 1 && value <= M)
        {
            frequency_array[value]++;
        }
    }

    for (int i = 1; i <= M; i++)
    {
        printf("%d\n", frequency_array[i]);
    }

    return 0;
}
