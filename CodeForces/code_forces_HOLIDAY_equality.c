	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int n,arr[200];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    qsort (arr, n, sizeof(int), comparetor );
    int count=0;
    for(int i=0;i<n;i++)
    {
        count=count+(arr[n-1]-arr[i]);
    }
    printf("%d",count);
    return 0;
}
