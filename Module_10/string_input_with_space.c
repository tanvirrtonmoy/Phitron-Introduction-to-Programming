#include <stdio.h>
//#include<string.h>...when use gets() or fgets(, ,) alternative scanf()
//string ak line a input nayar katra use
int main()
{
    char A[100];
    // scanf("%s", &A);

    // gets(A); sudu array name

    // fgets(A,size,stdin); array name,size of string with space and null,standardinput
    //enter oo count kore fgets()
    fgets(A, 18, stdin);

    printf("%s\n", A);

    return 0;
}
