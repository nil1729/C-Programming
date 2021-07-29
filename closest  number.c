#include<stdio.h>
#include<math.h>
#include<string.h>
int comparetor (const void * x, const void * y)
	{
		return ( *(int*)x - *(int*)y );
	}
int main()
{
    int n,min,t;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    qsort (a, n, sizeof(int), comparetor );
    min=abs(a[1]-a[0]);
    for(int i=0;i<n-1;i++)
    {
        if((a[i+1]-a[i])<min)
            min=a[i+1]-a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if((a[i+1]-a[i])==min)
            printf("%d %d ",a[i],a[i+1]);
    }
    return 0;
}
