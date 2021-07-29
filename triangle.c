 #include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    int comparetor (const void * a, const void * b)
    {
        return ( *(int*)a - *(int*)b );
    }
int main()
{
    int n,a[53],t[19602][3],p[19602];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x = (n*(n-1)*(n-2))/6;
    qsort(a, n, sizeof(int),comparetor);
    for(int i=n-1;i>1;i--)
    {
        if(a[i-2]+a[i-1]>a[i])
        {
            printf("%d %d %d",a[i-2],a[i-1],a[i]);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
