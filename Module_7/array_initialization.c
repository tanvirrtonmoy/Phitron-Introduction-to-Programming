#include <stdio.h>
int main()
{
    int array[5] = {10,69};//array initialization
    //fixed size array ar jorno kaj korbe...variable array ar 
    //jorno kaj korbe nah

   

    for (int i = 0; i < 5; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}