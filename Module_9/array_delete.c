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

    int index;
    scanf("%d", &index);

    for (int i = index; i < N - 1; i++)
    {
        A[i] = A[i + 1];
    }

    N--;

    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}