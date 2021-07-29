	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
	int is_REVERSIBLE(int a[],int s[],int begin, int end)
	{
	    for(int i=begin,j=end;i<=end;i++,j--)
        {
            if(a[i]!=s[j])
                return 0;
        }
        return 1;
	}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],sorted[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sorted[i]=arr[i];
    }
    qsort(sorted,n,sizeof(int),comparetor);
    /*for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
    for(int i=0;i<n;i++)
        printf("%d ",sorted[i]);*/
    int dif=0,begin=0,end=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=sorted[i])
        {
            dif++;
            if(begin==0)
                begin=i;
            else
                end=i;
        }
    }
   // printf("\n%d  %d  %d\n",dif,begin,end);
    if(dif==0)
        printf("yes\n");
    else
    {
        if(dif==2)
        {
            printf("yes\nswap %d %d",begin+1,end+1);
        }
        else
        {
            if(is_REVERSIBLE(arr,sorted,begin,end))
            {
                printf("yes\nreverse %d %d",begin+1,end+1);
            }
            else
            {
                printf("no");
            }
        }
    }
    return 0;
}
