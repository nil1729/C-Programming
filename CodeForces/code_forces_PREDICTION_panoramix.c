int prime(int n)
{
    int flag=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag++;
            break;
        }
    }
    if(flag==0)
        return 1;
    else
        return 0;
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    if(prime(m))
    {
        int flag=0;
        for(int i=n+1;i<m;i++)
        {
            if(prime(i))
                flag++;
        }
        if(flag==0)
            printf("YES");
        else
            printf("NO");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
