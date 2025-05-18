#include <stdio.h>

int main()
{

    // print ODD Number for FOR Loop
    for (int i = 1; i <= 100; i = i + 2)
    {
        printf("%d\n", i);
    }

    // print Even Number for FOR Loop
    for (int i = 0; i <= 100; i = i + 2)
    {
        printf("%d\n", i);
    }

    // print 4 Ar Gunitok for FOR Loop(4,8,12,16....)
    for (int i = 4; i <= 100; i = i + 4)
    {
        printf("%d\n", i);
    }

    // print 7 Ar Gunitok for FOR Loop(4,8,12,16....)
    for (int i = 7; i <= 50; i = i + 7)
    {
        printf("%d\n", i);
    }

    // print 100 to 1 for FOR Loop
    for (int i = 10; i >= 1; i--)
    {
        printf("%d\n", i);
    }

     // print 100 to 1 for FOR Loop
     for (int i = 10; i >= 1; i=i-2)
     {
         printf("%d\n", i);
     }

      // print increment by Multification for FOR Loop(2,4,8,16,32,64,....)
    for (int i = 2; i <= 70; i=i*2)
    {
        printf("%d\n", i);
    }

    return 0;
}