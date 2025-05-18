#include<stdio.h>
int main()
{

   int number;
   scanf("%d", &number);
   printf("Enter Number = %d\n" ,number);

   if(number > 0)
   {
    printf("The %d Number is a Positive Number",number);
   }

   else if(number < 0)
   {
    printf("The %d Number is an Negative Number",number);
   }

   else 
   {
    printf("The %d is Zero Number",number);
   }




    return 0;
}