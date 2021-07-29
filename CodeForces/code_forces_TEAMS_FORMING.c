	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[200]={};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    qsort (arr, n, sizeof(int), comparetor );
    int sum=0;
    for(int i=0;i<n;i+=2)
    {
        int x=arr[i+1]-arr[i];
        sum+=x;
        //printf("%d ",arr[i]);
    }
    printf("%d",sum);
    return 0;
}
