	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[2000]={};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    qsort (arr, n, sizeof(int), comparetor );
    int x=(n-1)/2;
    printf("%d",arr[x]);
    return 0;
}
