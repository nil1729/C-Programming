#include<stdio.h>
#include<string.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    char a[100];
    scanf("%s",a);
    a[n+1]='2';a[n+2]='3';
    for(int i=0;i<n;i+0)
    {
        if(a[i]=='0' && a[i+1]=='1' && a[i+2]=='0')
        {
            count++;
            i=i+3;
        }
        else
            i++;
    }
    printf("%d",count);
    return 0;
}
