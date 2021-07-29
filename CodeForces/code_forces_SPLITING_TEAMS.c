int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int cnt_1=0,cnt_2=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==1)
            cnt_1++;
        else
            cnt_2++;
    }
    int count=0;
    while(cnt_2!=0 && cnt_1!=0)
    {
        count++;
        cnt_2--;
        cnt_1--;
    }
    count+=(cnt_1/3);
    printf("%d",count);
    return 0;
}
