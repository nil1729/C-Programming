int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int n,sum=0,nil=0,count=0;
    scanf("%d",&n);
    int a[200];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    qsort (a, n, sizeof(int), comparetor );
    for(int i=n-1;i>=0;i--)
    {
        //`printf("%d ",a[i]);
        sum=sum-a[i];
        nil=nil+a[i];
        count++;
        if(nil>sum)
        {
            break;
        }
    }
    printf("%d",count);
    return 0;
}
