int MIN(int a[],int n,int k)
{
    int min=a[k],loc=k;
    for(int i=k+1;i<=n-1;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            loc=i;
        }
    }
    return loc;
}
void SELECTION_SORT(int a[],int n)
{
    for(int k=0;k<=n-2;k++)
    {
        int LOC=MIN(a,n,k);
        int t=a[k];
        a[k]=a[LOC];
        a[LOC]=t;
    }
}
int main()
{
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    SELECTION_SORT(a,n);
    for(int i=0;i<n;i++)
        printf("%d  ",a[i]);
    return 0;
}
