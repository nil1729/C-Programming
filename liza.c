int main()
{
    int n,k,arr[100];
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int page=1,count=0,problem=1;
    for(int i=0;i<n;i++)
    {
        problem=1;
        while(problem<=arr[i])
        {
            for(int j=1;j<=k&&problem<=arr[i];j++)
            {
                if(problem==page)
                {
                    count++;
                }
                problem++;
            }
            page++;
        }
    }
    printf("%d",count);
    return 0;
}
