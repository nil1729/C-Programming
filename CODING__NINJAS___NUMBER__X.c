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
            if(i==j || i==2*n-j)
                printf("%d",min(i,abs(x+1-i)));
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
