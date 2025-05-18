#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int character = 1;
    for (int i = 1; i <= n; i++) // for printing line
    {

        for (int j = 1; j <= character; j++) // for printing star
        {
            printf("%c ", 'A' + j - 1); // Convert j to corresponding letter
        }

        printf("\n");
        character++;
    }

    return 0;
}