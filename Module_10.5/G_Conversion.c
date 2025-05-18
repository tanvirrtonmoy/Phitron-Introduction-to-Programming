#include <stdio.h>

int main()
{
    char A[100001];
    fgets(A, sizeof(A), stdin);

    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == ',')
        {
            A[i] = ' ';
        }

        else if (A[i] >= 'a' && A[i] <= 'z')
        {
            A[i] = A[i] - 32;
        }

        else if (A[i] >= 'A' && A[i] <= 'Z')
        {
            A[i] = A[i] + 32;
        }
    }

    printf("%s", A);

    return 0;
}
