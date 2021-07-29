	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int n;
    scanf("%d",&n);
    int a[200];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m,b[200];
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    qsort(a,n,sizeof(int),comparetor);
    qsort(b,m,sizeof(int),comparetor);
    printf("%d %d",a[n-1],b[m-1]);
    return 0;
}
