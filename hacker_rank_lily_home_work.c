	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        b[i]=a[i];
    int k=n-1;
    qsort (b, n, sizeof(int), comparetor );
    for(int i=0;i<n;i++)
    {
        c[k]=b[i];
        k--;
    }
    /*for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    for(int i=0;i<n;i++)
        printf("%d ",b[i]);
    printf("\n");
    for(int i=0;i<n;i++)
        printf("%d ",c[i]);
    printf("\n");*/
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=c[i])
            cnt2++;
        if(a[i]!=b[i])
            cnt1++;
    }
    if(cnt1>cnt2)
        printf("%d",cnt2-1);
    else
        printf("%d",cnt1-1);
    return 0;
}
