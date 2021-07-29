int main()
{
    int n,m,flag,count=0;
    scanf("%d %d",&n,&m);
    int l[200],r[200];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&l[i],&r[i]);
    }
    for(int i=1;i<=m;i++)
    {
        flag=0;
        for(int j=0;j<n;j++)
        {
            if(i>=l[j] && i<=r[j])
            {
                flag++;
                break;
            }
        }
        if(flag==0)
        {
            count++;
            //printf("%d ",i);
        }
    }
    if(count==0)
        printf("0");
    else
    {
        printf("%d\n",count);
        for(int i=1;i<=m;i++)
    {
        flag=0;
        for(int j=0;j<n;j++)
        {
            if(i>=l[j] && i<=r[j])
            {
                flag++;
                break;
            }
        }
        if(flag==0)
        {
            //count++;
            printf("%d ",i);
        }
    }
    }
    return 0;
}
