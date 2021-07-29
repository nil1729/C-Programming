#include<stdio.h>
	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int d1,d2,d3,x=0;
    scanf("%d %d %d",&d1,&d2,&d3);
    int arr[5]={};
    arr[0]=d1+d2+d3;
    arr[1]=2*(d1+d2);
    arr[2]=2*(d1+d3);
    arr[3]=2*(d2+d3);
    qsort (arr, 4, sizeof(int), comparetor );
    printf("%d",arr[0]);
    return 0;
}
