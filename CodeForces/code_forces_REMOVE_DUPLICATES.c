	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //qsort (arr, n, sizeof(int), comparetor );
    int t[100]={};
    //t[0]=arr[0];
    int k=0;
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                flag++;
                break;
            }
        }
        if(flag==0)
        {
            t[k]=arr[i];
            k++;
        }
    }
    printf("%d\n",k);
    for(int i=0;i<k;i++)
        printf("%d ",t[i]);
    return 0;
}
