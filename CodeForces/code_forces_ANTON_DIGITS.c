	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int k2,k3,k5,k6;
    scanf("%d %d %d %d",&k2,&k3,&k5,&k6);
    int arr[4];
    arr[0]=k2;
    arr[1]=k5;
    arr[2]=k6;
    qsort (arr, 3, sizeof(int), comparetor );
    int min=arr[0];
    int sum=min*256;
    k2=k2-min;
    if(k2>=k3)
    {
        sum+=(k3*32);
    }
    else
    {
        sum+=(k2*32);
    }
    printf("%d",sum);
    return 0;
}
