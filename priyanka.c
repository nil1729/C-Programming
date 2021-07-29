#include<stdio.h>
#include<math.h>
int comparetor (const void * a, const void * b)
{
		return ( *(int*)a - *(int*)b );
}
int main()
{
    int n,i=0,count=1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    qsort (a, n, sizeof(int), comparetor );
    i=0;
    while(i<n)
    {
        for(int j=i;j<n;j++)
        {
            int x = abs(a[i]-a[j]);
            if(x > 4)
            {
                i = j;
                count++;
                break;
            }
            if(j==n-1)
            {
                i++;
                break;
            }
        }
    }
    printf("%d",count);
    return 0;
}
