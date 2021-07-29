int main()
{
    int n,arr[1000];
    scanf("%d",&n);
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<20;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    char s[2000]={};
    for(int i=0;i<n;i++)
    {
        s[i]='o';
        for(int j=0;j<20;j++)
        {
            if(i+1==arr[j])
                s[i]='O';
        }
    }
    printf("%s",s);
    return 0;
}
