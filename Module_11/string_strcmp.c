#include <stdio.h>
#include <string.h>

int main()
{

    char A[101], B[101];
    scanf("%s %s", &A, &B);

    int value = strcmp(A, B);

    if (value < 0)
    {
        printf("A is smaller");
    }

    else if (value == 0)
    {
        printf("Equal");
    }

    else if (value > 0)
    {
        printf("B is smaller");
    }

    return 0;
}