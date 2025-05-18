#include <stdio.h>

char small_to_capital(char a)

{
    char answer = a - 32;
    return answer;
}

int main()
{
    char x;
    scanf("%c", &x);

    // if (x >= 'a' && x <= 'z')//jody check kori ata a to z
    // {
        char value = small_to_capital(x);
        printf("%c\n", value);
   // }

    return 0;
}