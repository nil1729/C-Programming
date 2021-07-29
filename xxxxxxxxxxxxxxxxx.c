#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,t,x,count=0,arr[100000];
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=1;i<n;i++)
        {
            int j;
            j=i;
            while(arr[j]<arr[j-1]&&j>0)
            {
                t=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=t;
                j--;
            }
        for(int i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
        }
    return 0;
}

