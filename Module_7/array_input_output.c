#include <stdio.h>
int main()
{
    int array[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}