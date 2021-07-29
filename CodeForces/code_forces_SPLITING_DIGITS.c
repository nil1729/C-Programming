int main()
{
    int n;
    scanf("%d",&n);
    if(n<9)
    {
        printf("1\n%d",n);
    }
    else
    {
        int x=n/9;
        printf("%d\n",x);
        for(int i=0;i<x;i++)
        {
            printf("9 ");
        }
        if(x*9!=n)
            printf("%d",n-9*x);
    }
    return 0;
}
