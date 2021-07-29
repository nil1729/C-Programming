int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==1)
    {
        int x=(n/2)*(n/2) + (n/2 + 1)*(n/2 + 1);
        printf("%d\n",x);
    }
    else
    {
        int x=n*n/2;
        printf("%d\n",x);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((i%2==1 && j%2==1)||(i%2==0 && j%2==0))
            {
                printf("C");
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }
    return 0;
}
