int main()
{
    int n,B=0,C=0;
    scanf("%d",&n);
    int arr[200]={};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>=0)
            B+=arr[i];
        else
            C+=arr[i];
    }
    printf("%d",B-C);
    return 0;
}
