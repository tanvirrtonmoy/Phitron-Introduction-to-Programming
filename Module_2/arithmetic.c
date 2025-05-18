#include<stdio.h>
int main()
{
   
    
    
   float num1;
   int num2;
   scanf("%f" ,&num1);
   scanf("%d" ,&num2);

   int sum = num1 + num2;
   printf("Addition = %d\n" ,sum);
   int sub = num1 - num2;
   printf("Subtraction = %d\n" , sub);
   float mul = num1 * num2;
   printf("Multification = %.2f\n" ,mul);
   float div = num1 / num2;
   printf("Division = %.2f\n" ,div);

   int mod = (int)num1 % num2;
   printf("Modulous = %d" ,mod);







    return 0;
}