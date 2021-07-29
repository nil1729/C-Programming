int main()
{
    int n,f[102]={};
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=100;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==arr[j])
                f[i]++;
        }
    }
    int min=n;
    for(int i=0;i<=100;i++)
    {
        if(f[i]>0 && f[i]<min)
            min=f[i];
    }
    for(int i=0;i<=100;i++)
    {
        if(f[i]==min)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
