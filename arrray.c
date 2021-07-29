#include<stdio.h>
int main()
{
    int n,ar[100],b[100]={},max;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<100;j++)
        {
            if(ar[i]==j)
            {
                b[j]++;
            }
        }
    }
   max=b[0];
   for(int j=1;j<100;j++)
   {
       if(b[j]>max)
       {
           max=b[j];
       }
   }
   printf("%d",n-max);
   return 0;
}
