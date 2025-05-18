#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)//or n-1
    {
        for (int j = i + 1; j < n; j++)
        {

            if (a[i] < a[j]) // serial not ok
            {
                int temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                /// printf("YES\n");
                // printf("%d %d\n",a[i],a[j]);
            }
            else
            {
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}