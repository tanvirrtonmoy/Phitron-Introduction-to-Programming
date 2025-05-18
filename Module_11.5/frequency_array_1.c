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

    int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0,
        count6 = 0, count7 = 0, count8 = 0, count9 = 0;
    for (int i = 0; i < N; i++)
    {

        if (A[i] == 0)
        {
            count0++;
        }

        else if (A[i] == 1)
        {
            count1++;
        }

        else if (A[i] == 2)
        {
            count2++;
        }
        else if (A[i] == 3)
        {
            count3++;
        }

        else if (A[i] == 4)
        {
            count4++;
        }

        else if (A[i] == 5)
        {
            count5++;
        }
        else if (A[i] == 6)
        {
            count6++;
        }

        else if (A[i] == 7)
        {
            count7++;
        }

        else if (A[i] == 8)
        {
            count8++;
        }
        else if (A[i] == 9)
        {
            count9++;
        }
    }

    printf("%d -> %d\n", 0, count0);
    printf("%d -> %d\n", 1, count1);
    printf("%d -> %d\n", 2, count2);
    printf("%d -> %d\n", 3, count3);
    printf("%d -> %d\n", 4, count4);
    printf("%d -> %d\n", 5, count5);
    printf("%d -> %d\n", 6, count6);
    printf("%d -> %d\n", 7, count7);
    printf("%d -> %d\n", 8, count8);
    printf("%d -> %d\n", 9, count9);

    return 0;
}