#include<stdio.h>
int main()
{
    char A[100001];
    scanf("%s",&A);

    int consonanant_count =0;

    for(int  i=0;A[i] != '\0';i++)
    {
        if(A[i] != 'a' && A[i] != 'e' && A[i] != 'i' && A[i] != 'o' && A[i] != 'u' )
        {
            consonanant_count++;

        }
    }

    printf("%d",consonanant_count);






    return 0;
}