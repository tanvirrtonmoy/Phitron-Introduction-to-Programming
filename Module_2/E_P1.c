#include<stdio.h>
int main()
{

   int number;
   scanf("%d", &number);
   printf("Enter Number = %d\n" ,number);

   if(number % 2 == 0)
   {
    printf("The %d Number is a even Number",number);
   }

   else
   {
    printf("The %d Number is an ODD Number",number);
   }




    return 0;
}