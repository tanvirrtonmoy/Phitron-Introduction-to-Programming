#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    int upperCounts[T], lowerCounts[T], digitCounts[T];

    for (int i = 0; i < T; i++)
    {
        char S[10001];
        int counts[3] = {0, 0, 0};
        scanf("%s", S);

        for (int i = 0; S[i] != '\0'; i++)
        {
            if (S[i] >= 'A' && S[i] <= 'Z')
            {
                counts[0]++;
            }
            else if (S[i] >= 'a' && S[i] <= 'z')
            {
                counts[1]++;
            }
            else if (S[i] >= '0' && S[i] <= '9')
            {
                counts[2]++;
            }
        }

        upperCounts[i] = counts[0];
        lowerCounts[i] = counts[1];
        digitCounts[i] = counts[2];
    }

    for (int i = 0; i < T; i++)
    {
        printf("%d %d %d\n", upperCounts[i], lowerCounts[i], digitCounts[i]);
    }

    return 0;
}
