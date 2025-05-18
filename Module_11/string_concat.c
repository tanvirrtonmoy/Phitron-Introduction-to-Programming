#include<stdio.h>
#include<string.h>
int main()
{

    char A[101],B[101];
    scanf("%s %s",&A,&B);

    int length_A = strlen(A);

    int length_B = strlen(B);

    for(int i=0;i<=length_B;i++)
    {
        A[i+ length_A] = B[i];
    }


    printf("%s %s",A,B);
    




    return 0;
}