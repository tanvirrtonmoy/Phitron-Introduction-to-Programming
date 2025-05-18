#include<stdio.h>
int main()
{
  int N;
  scanf("%d",&N);
  int A[N+1];

  for(int i=0;i<N;i++)
  {
    scanf("%d",&A[i]);
  }

  int index,value;
  scanf("%d %d",&index,&value);

  for(int i =N;i>=index+1;i--)
  {
    A[i] =A[i-1];
  }

  A[index] = value;

  for(int i =0;i<=N;i++)
  {
    printf("%d ", A[i]); 
  }


  





    return 0;
}