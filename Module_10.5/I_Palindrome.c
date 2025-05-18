#include <stdio.h>
int main()
{

    char A[1001];
    scanf("%s", A);
   
    int length= strlen(A);

    int isPalindrome = 1;

    for (int i = 0; i < length/ 2; i++)
    {

        if (A[i] != A[length - 1 - i])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}