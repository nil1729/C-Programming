void COUNTING_SORT(int a[],int n)
{
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>k)
            k=a[i];
    }
    k++;
    int b[n],c[k];
    for(int i=0;i<k;i++)
        c[i]=0;
    for(int i=0;i<n;i++)
    {
        c[a[i]]++;
    }
    for(int i=1;i<k;i++)
    {
        c[i]=c[i]+c[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        b[c[a[i]]-1]=a[i];
        c[a[i]]--;
    }
    for(int i=0;i<n;i++)
        a[i]=b[i];
}
int main()
{
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    COUNTING_SORT(a,n);
    for(int i=0;i<n;i++)
        printf("%d  ",a[i]);
    return 0;
}
