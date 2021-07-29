#include<stdio.h>
int main()
{
    float arr[5],sum=0;
    for(int i=0;i<5;i++)
    {
        scanf("%f",&arr[i]);
        sum+=arr[i];
    }
    float mean=sum/5;
    for(int i=0;i<5;i++)
    {
        arr[i]-=mean;
        printf("%.2f  ",arr[i]);
    }
    return 0;
}
