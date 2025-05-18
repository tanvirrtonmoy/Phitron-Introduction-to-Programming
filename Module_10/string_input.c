#include <stdio.h>
int main()
{
    char A[100];
    scanf("%s", &A);  
    //scanf("%s", A);  // Correct usage

    printf("%s\n", A);
    printf("%c\n" ,A[5]);
    printf("%d" ,A[5]);

    return 0;
}

