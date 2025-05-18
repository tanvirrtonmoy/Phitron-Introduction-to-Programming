#include <stdio.h>
#include <string.h>

int main()
{
    char str[10001];

    scanf("%s",&str);

    int frequency_array[26] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] >= 'a' && str[i] <= 'z')
        {
            frequency_array[str[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (frequency_array[i] > 0)
        {
            printf("%c - %d\n", 'a' + i, frequency_array[i]);
        }
    }

    return 0;
}
