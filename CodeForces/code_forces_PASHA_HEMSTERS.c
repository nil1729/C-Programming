	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    int x[200]={},y[200]={};
    for(int i=0;i<a;i++)
        scanf("%d",&x[i]);
    for(int i=0;i<b;i++)
        scanf("%d",&y[i]);
    //qsort (x, a, sizeof(int), comparetor );
    //qsort (y, b, sizeof(int), comparetor );
    int k=1;//count=0;
    while(k<=n)
    {
        int flag=0;
        for(int i=0;i<a;i++)
        {
            if(k==x[i])
            {
                printf("1 ");
                flag++;
            }

        }
        if(flag==0)
            printf("2 ");
        k++;
    }
    return 0;
}
