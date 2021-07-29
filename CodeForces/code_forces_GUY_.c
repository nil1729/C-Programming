int main()
{
    int n,p,q,x[200],y[200],j=1,k=1,count=0;
    scanf("%d",&n);
    scanf("%d",&p);
    for(int i=1;i<=p;i++)
    {
        scanf("%d",&x[i]);
    }
    scanf("%d",&q);
    for(int i=1;i<=q;i++)
    {
        scanf("%d",&y[i]);
    }
    for(int i=1;i<=n;i++)
    {
        j=1;k=1;
        while(j<=p || k<=q)
        {
            if(x[j]==i || y[k]==i)
            {
                count++;
                break;
            }
            else
            {
                j++;
                k++;
            }
        }
    }
    if(count==n)
        printf("I become the guy.");
    else
        printf("Oh, my keyboard!");
    return 0;
}
