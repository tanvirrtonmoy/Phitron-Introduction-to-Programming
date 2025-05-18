#include <stdio.h>

int main()
{

    int password;

    while (scanf("%d", &password))
    //while (scanf("%d", &password) != EOF) //End Of File
    // for(;scanf("%d", &password);)
    {
        if (password == 1999)
        {

            printf("Correct\n");
            break;
        }

        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}