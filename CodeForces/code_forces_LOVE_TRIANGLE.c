int main()
{
    int n;
    scanf("%d",&n);
    int arr[6000]={};
    for(int i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    for(int i=1;i<=n;i++)
    {
        if(i==arr[arr[arr[i]]])
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
