#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    int results[T];
    for (int i = 0; i < T; i++)
    {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        int totalWork = M1 * D;
        int newDays = totalWork / (M1 + M2);
        int fewerDays = D - newDays;

        results[i] = fewerDays;
    }

    // Print all results after processing
    for (int i = 0; i < T; i++)
    {
        printf("%d\n", results[i]);
    }

    return 0;
}
