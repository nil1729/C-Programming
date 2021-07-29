	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    qsort (arr, n, sizeof(int), comparetor );
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>b && arr[i]<c)
            count++;
    }
    printf("%d",count);
    return 0;
}
