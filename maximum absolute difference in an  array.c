#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int comparetor (const void * x, const void * y)
	{
		return ( *(int*)x - *(int*)y );
	}

int main()
{
    int n,a[100000],min;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    qsort (a, n, sizeof(int), comparetor );
    min=(a[1]-a[0]);
    for(int i=0;i<n-1;i++)
    {
        if((a[i+1]-a[i])<min)
            min=a[i+1]-a[i];
    }
    printf("%d",min);
    return 0;
}
