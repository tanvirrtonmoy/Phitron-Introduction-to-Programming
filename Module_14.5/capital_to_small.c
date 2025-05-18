#include <stdio.h>

char capital_to_small(char a)

{
    char answer = a + 32;
    return answer;
}

int main()
{
    char x;
    scanf("%c", &x);

    // if (x >= 'A' && x <= 'Z')//jody check kori INPUT ata A to Z
    // {
        char value = capital_to_small(x);
        printf("%c\n", value);
   // }

    return 0;
}