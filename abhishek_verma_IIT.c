	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a, n, sizeof(int),  comparetor);
    i=n-3;
    while(i>0 && a[i]+a[i+1]<a[i+2])
    {
        i--;
    if(i>=0)
    {
        printf("%d %d %d",a[i],a[i+1],a[i+2]);
    }
    else
        printf("-1");
    }
    return 0;
}
