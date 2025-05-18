#include <stdio.h>
#include <string.h>

int main()
{
    char str[10001];

    fgets(str, sizeof(str), stdin);

    int frequency_array[26] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] >= 'a' && str[i] <= 'z')
        {
            frequency_array[str[i] - 'a']++;
        }

        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            frequency_array[str[i] - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (frequency_array[i] > 0)
        {
            printf("%c : %d\n", 'a' + i, frequency_array[i]);
        }
    }

    return 0;
}
