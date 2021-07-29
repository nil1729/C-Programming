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
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    qsort (arr, n, sizeof(int), comparetor);
    printf("%d",arr[n/2]);
    return 0;
}
