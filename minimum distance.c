#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[1000],b,min,temp=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                b=j-i;
                if(temp==0)
                {
                    min=b;
                    temp=1;
                }
                if(min>b)
                {
                    min=b;
                }
            }
        }
    }
    if(temp==0)
        printf("-1\n");
    else
        printf("%d\n",min);
    return 0;
}
