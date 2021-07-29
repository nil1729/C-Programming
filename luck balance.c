int comparetor (const void * x, const void * y)
	{
		return ( *(int*)x - *(int*)y );
	}

int main()
{
    int n,k,a[100][2],important[100]={},b[100],sum=0,count=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i][1]==1)
        {
            count++;
            important[i]=a[i][0];
        }
    }
    printf("%d\n",count);
    qsort (important, n, sizeof(int), comparetor );
    for(int i=0;i<count-k;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(important[j]>0)
            {
                b[i]=(important[j]*2);
                important[j]=0;
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i][0];
    }
    printf("%d\n",sum);
    for(int i=0;i<count-k;i++)
    {
        sum=sum-b[i];
    }
    printf("%d",sum);
    return 0;
}
