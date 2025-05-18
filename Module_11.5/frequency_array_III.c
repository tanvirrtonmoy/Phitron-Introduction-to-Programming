#include <stdio.h>
int main()
{

    int N;
    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int frequency_array[10] = {0};
    for (int i = 0; i < N; i++)
    {

        // int value = A[i];
        // frequency_array[value]++

        frequency_array[A[i]]++;
    }

    for (int i = 0; i < 10; i++)//here 10 frequency_array size
    {
        printf("%d -> %d\n", i, frequency_array[i]);
    }

    return 0;
}