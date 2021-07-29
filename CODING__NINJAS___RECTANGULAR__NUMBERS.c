int min(int a,int b)
{
    if(a>b)
        return b;
    else
        return a;
}
int main()
{
    int n;
    scanf("%d",&n);
    int x=2*n-1;
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=x;j++)
        {
            int p=min(i,abs(2*n-i));
            int q=min(j,abs(2*n-j));
            int y=min(p,q);
            printf("%d",n+1-y);
        }
        printf("\n");
    }
    return 0;
}
