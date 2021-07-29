int main()
{
    int t;
    scanf("%d",&t);
    for(int k=0;k<t;k++)
    {
            int n;
    scanf("%d",&n);
    int a[n+5];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    a[0]=0;a[n+1]=0;
    int sumfront=0,sumback=0,flag=0;
    for(int i=1;i<=n;i++)
    {
        sumback=sumback+a[i];
    }
    for(int i=1;i<=n;i++)
    {
        sumback=sumback-a[i];
        sumfront=sumfront+a[i-1];
        if(sumback==sumfront)
        {
            printf("YES\n");
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        printf("NO\n");
    }
    }
    return 0;
}
