#include <stdio.h>
#include <string.h>
int main()
{
    char A[1000001];
    scanf("%s", A);
    // printf("%s" ,A);

    int sum = 0;
    int length = strlen(A);
    for (int i = 0; i < length; i++)
    {
        sum = sum + A[i] - '0';//0 ar ascii value 48 so -48 dile ooo hobee
    }

    printf("%d", sum);

    return 0;
}