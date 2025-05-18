#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int x;
    scanf("%d",&x);

    int flag=0;//surute akta man rakci 100 oo rakte partam

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {

            if(a[i]+a[j] == x)
            {
                flag=1;//condition  sotto holai flag =1
                printf("YES\n");
                printf("%d %d\n",a[i],a[j]);
            }
           // printf("%d %d\n",a[i],a[j]);
        }
        //use flag variable --condition akber oo sotti na hote
        //no print korbo 

       
    }

     if(flag==0)
        {
            printf("No\n");
        }




    return 0;
}