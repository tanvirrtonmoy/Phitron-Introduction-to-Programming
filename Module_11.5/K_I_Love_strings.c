#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d", &N);
    getchar(); // Clear the newline after reading N

    for (int t = 0; t < N; t++)
    {
        char S[51], T[51];

        // Read both strings safely
        scanf("%s %s\n", &S, &T);

        int lenS = strlen(S);
        int lenT = strlen(T);

        int i = 0;
        while (i < lenS && i < lenT)
        {
            printf("%c%c", S[i], T[i]);
            i++;
        }

        while (i < lenS)
        {
            printf("%c", S[i]);
            i++;
        }

        while (i < lenT)
        {
            printf("%c", T[i]);
            i++;
        }

        printf("\n");
    }

    return 0;
}
