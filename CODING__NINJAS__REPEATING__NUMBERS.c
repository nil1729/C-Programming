int main()
{
    int n;
    scanf("%d",&n);
    int k=1,count=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(count<=9)
                printf("%d",count++);
            else
            {
                count=1;
                printf("%d",count++);
            }
        }
        k*=2;
        printf("\n");
    }
    return 0;
}
