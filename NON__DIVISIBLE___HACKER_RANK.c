int freq(int arr[],int n,int x,int y)
{
    int c_x=0,c_y=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
            c_x++;
        if(arr[i]==y)
            c_y++;
    }
    if(c_x>c_y)
        return c_x;
    else
        return c_y;
}
int compare(const void *a,const void *b)
{
    return (*(int*)a-*(int*)b);
}
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        arr[i]=x%k;
    }
    qsort(arr,n,sizeof(int),compare);
    int count=0;
    if(k%2==1)
    {
        for(int i=1;i<=k/2;i++)
        {
            count+=freq(arr,n,i,k-i);
        }
        int cnt_0=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
                cnt_0++;
        }
        if(cnt_0!=0)
            count+=1;
        printf("%d",count);
        return 0;
    }
    else
    {
        for(int i=1;i<k/2;i++)
        {
            count+=freq(arr,n,i,k-i);
        }
        int cnt_0=0,cnt_k=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
                cnt_0++;
            if(arr[i]==k/2)
                cnt_k++;
        }
        if(cnt_0!=0)
            count+=1;
        if(cnt_k!=0)
            count+=1;
        printf("%d",count);
        return 0;
    }
}
