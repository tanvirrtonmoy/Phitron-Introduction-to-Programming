#include<stdio.h>
int main()
{

    char A[11];
    char B[11];

    scanf("%s\n",A);
    scanf("%s",B);
    

    int length_A = strlen(A);
    int length_B = strlen(B);

    printf("%d %d\n",length_A,length_B);

    printf("%s%s\n",A,B);

    char temp;
    temp = A[0];
    A[0]=B[0];
    B[0]=temp;
    printf("%s %s",A,B);







    return 0;
}