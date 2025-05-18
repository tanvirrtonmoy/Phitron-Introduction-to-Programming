#include<stdio.h>
int main()
{

  int x = 10;
  int y = x++;
  int z = ++y;

  printf("%d\n" ,z++);
  printf("%d\n" ,z);

  int a = 10;
  ++a;
  printf("%d\n" ,++a);
  printf("%d\n" ,a);



  int t = 10;
  --t;
  printf("%d\n" ,t--);
  printf("%d" ,t--);



    return 0;
}