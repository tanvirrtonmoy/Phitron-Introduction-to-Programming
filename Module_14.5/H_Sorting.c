#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int A[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] > A[j])
            {
                int temp;
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}