int main()
{
    int n,k,count=1;
    scanf("%d %d",&n,&k);
    int a[200],p[200];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        p[i]=i+1;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
                int m=p[i];
                p[i]=p[j];
                p[j]=m;
            }
        }
    }
    /*for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
    printf("\n");*/
    int pos[200]={},h=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            count++;
            pos[h]=p[i];
            h++;
        }
    }
    pos[k-1]=p[n-1];
    if(count>=k)
    {
        printf("YES\n");
        for(int i=0;i<k;i++)
            printf("%d ",pos[i]);
    }
    else
        printf("NO");
    return 0;
}
