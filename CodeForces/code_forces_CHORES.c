	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    qsort (arr, n, sizeof(int), comparetor );
    int y=arr[n-a];
    int x=arr[n-a-1];
    printf("%d",y-x);
    return 0;
}
