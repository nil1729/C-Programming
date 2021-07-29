	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int n,m,x=0,count=0;
    scanf("%d%d",&n,&m);
    int arr[200];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    qsort(arr,n,sizeof(int),comparetor);
    for(int i=n-1;i>=0;i--)
    {
        x+=arr[i];
        count++;
        if(x>=m)
            break;
        //count++;
    }
    printf("%d",count);
    return 0;
}
