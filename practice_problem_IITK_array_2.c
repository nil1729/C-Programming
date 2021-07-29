#include<stdio.h>
int main()
{
    int arr[5],temp;
    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);
    temp=arr[0];
    for(int i=1;i<5;i++)
        arr[i-1]=arr[i];
    arr[4]=temp;
    for(int i=0;i<5;i++)
        printf("%d  ",arr[i]);
    return 0;
}
