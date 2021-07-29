int main()
{
    int n;
    scanf("%d",&n);
    int arr[2000];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            arr[i]--;
        printf("%d ",arr[i]);
    }
    return 0;
}
