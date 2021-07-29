#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int *p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
        scanf("%d",(p+i));
    for(int i=1;i<n;i++)
        *(p+i)+=*(p+i-1);
    for(int i=0;i<n;i++)
        printf("%d ",p[i]);
    return 0;
}
