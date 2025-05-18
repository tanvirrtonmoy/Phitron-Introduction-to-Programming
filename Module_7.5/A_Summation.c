#include <stdio.h>

int main()
{
    int N;
    long long sum = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        long long x;
        scanf("%lld", &x);
        sum += x;
    }

    if (sum < 0)
    {
        sum = -sum;
    }

    printf("%lld\n", sum);

    return 0;
}
