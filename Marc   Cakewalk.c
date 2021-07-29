int main()
{
    int n,a[40],x,p,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        p=pow(2,i);
        sum=sum+(p*a[n-1-i]);
    }
    printf("%d",sum);
    return 0;
}
