	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int arr[10]={};
    scanf("%d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3]);
    qsort (arr, 4, sizeof(int), comparetor );
    printf("%d %d %d",arr[3]-arr[2],arr[3]-arr[1],arr[3]-arr[0]);
    return 0;
}
