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

    int frequency_array [10] = {0};
    for (int i = 0; i < N; i++)
    {

        if (A[i] == 0)
        {
            frequency_array[0]++;
        }

        else if (A[i] == 1)
        {
           frequency_array[1]++;
        }

        else if (A[i] == 2)
        {
           frequency_array[2]++;
        }
        else if (A[i] == 3)
        {
           frequency_array[3]++;
        }

        else if (A[i] == 4)
        {
           frequency_array[4]++;
        }

        else if (A[i] == 5)
        {
           frequency_array[5]++;
        }
        else if (A[i] == 6)
        {
           frequency_array[6]++;
        }

        else if (A[i] == 7)
        {
           frequency_array[7]++;
        }

        else if (A[i] == 8)
        {
            frequency_array[8]++;
        }
        else if (A[i] == 9)
        {
          frequency_array[9]++;
        }
    }

    printf("%d -> %d\n", 0, frequency_array[0]);
    printf("%d -> %d\n", 1, frequency_array[1]);
    printf("%d -> %d\n", 2, frequency_array[2]);
    printf("%d -> %d\n", 3, frequency_array[3]);
    printf("%d -> %d\n", 5, frequency_array[4]);
    printf("%d -> %d\n", 4, frequency_array[5]);
    printf("%d -> %d\n", 6, frequency_array[6]);
    printf("%d -> %d\n", 7, frequency_array[7]);
    printf("%d -> %d\n", 8, frequency_array[8]);
    printf("%d -> %d\n", 9, frequency_array[9]);

    return 0;
}