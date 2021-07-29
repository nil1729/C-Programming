int main()
{
    int n,count=0;
    scanf("%d",&n);
    int a[1020],b[1020];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                count++;
                b[j]=0;
                break;
            }
        }
    }
    if(count<n)
        count++;
    else
        count--;
    printf("%d",count);
    return 0;
}
