#include <stdio.h>
#include <string.h>

int main()
{

    char A[101], B[101];
    scanf("%s %s", &A, &B);

    int value = strcmp(A, B);

    if (value < 0)
    {
        printf("%s",A);
    }

    else if (value == 0)
    {
        printf("%s",A);
    }

    else if (value > 0)
    {
        printf("%s",B);
    }

    return 0;
}