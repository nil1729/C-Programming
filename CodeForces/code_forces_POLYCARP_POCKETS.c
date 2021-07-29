int main()
{
    int n;
    scanf("%d",&n);
    int arr[200],count[200]={};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        count[arr[i]]++;
    }
    int max=0;
    for(int i=1;i<=100;i++)
    {
        if(count[i]>max)
            max=count[i];
    }
    printf("%d",max);
    return 0;
}
