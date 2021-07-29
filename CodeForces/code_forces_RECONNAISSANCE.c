	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int n,d;
    scanf("%d %d",&n,&d);
    int a[2000]={};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    qsort (a, n, sizeof(int), comparetor );
    int j=0,k=1,c=0,count=0;
    while(j<n)
    {
        if((a[j+k]-a[j]<=d) && (j+k<n))
        {
            c++;
            k++;
        }
        else
        {
            count+=(c*2);
            //printf("%d  ",c);
            k=1;
            c=0;
            j++;
            //printf("%d\n",count);
        }
        if(j==n)
            break;
    }
    printf("%d",count);
    return 0;
}
