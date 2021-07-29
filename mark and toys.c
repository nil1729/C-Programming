int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}

int main()
{
    int n,k,t[100000],count=0,sum=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t[i]);
    }
    qsort (t, n, sizeof(int), comparetor );
    for(int i=0;i<n;i++)
    {
        sum=sum+t[i];
        if(sum<=k)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    printf("%d",count);
    return 0;
}
