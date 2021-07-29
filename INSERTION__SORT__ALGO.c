void INSERTION_SORT(int a[],int n)
{
    for(int i=1;i<=n-1;i++)
    {
        int t=a[i];
        int j=i-1;
        while(j>=0 && t<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
    }
}
int main()
{
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    INSERTION_SORT(a,n);
    for(int i=0;i<n;i++)
        printf("%d  ",a[i]);
    return 0;
}
