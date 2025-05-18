#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{

    char A[101],B[101];
    scanf("%s %s",&A,&B);

    int i = 0;
    while(true) // while(1) without stdbool.h header file
    {


       if(A[i] =='\0' && B[i] == '\0' )
        {
            printf("Equal");
            break;
        }

        else if(A[i] == '\0')
        {
            printf("A is Smaller");
            break;
        }

        else if(B[i] == '\0')
        {
            printf("B is Smaller");
            break;
        }
       
        else if(A[i]<B[i])
        {
            printf("A is smaller");
            break;

        }
        else if(A[i]>B[i])
        {
            printf("B is smaller");
            break;

        }

        else if(A[i] == B[i])
        {
            i++;

        }
    }


    //printf("%s %s",A,B);
    




    return 0;
}