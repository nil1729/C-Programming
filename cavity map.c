#include<stdio.h>
int main()
{
    int n;
    char a[100][1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<n-1;j++)
        {
            if((a[i][j]-48 > a[i][j+1]-48)&&(a[i][j]-48 > a[i][j-1]-48)&&(a[i][j]-48 > a[i+1][j]-48)&&(a[i][j]-48 > a[i-1][j]-48))
                a[i][j]='X';
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
