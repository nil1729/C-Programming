int main()
{
    int n;
    scanf("%d",&n);
    int k,j=0;
    scanf("%d",&k);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int b[n];
    for(int i=0;i<n;i++)
        b[a[i]-1]=i;
    while(k>0 && j<n)
    {
        if(a[j]!=n-j)
        {
            int temp=a[j];
            int pos=b[n-j-1];
            a[j]=a[pos];
            a[pos]=temp;
            b[n-j-1]=j;
            b[temp-1]=pos;
            k--;
        }
    }
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
