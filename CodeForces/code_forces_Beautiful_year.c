int check(int n)
{
    int x=n,i=4,arr[10]={};
    while(x!=0)
    {
        arr[i]=x%10;
        x=x/10;
        i--;
    }
    if((arr[1]!=arr[2])&&(arr[1]!=arr[3])&&(arr[1]!=arr[4])&&(arr[2]!=arr[3])&&(arr[2]!=arr[4])&&(arr[3]!=arr[4]))
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int n,x;
    scanf("%d",&n);
    int t=n;
    while(1)
    {
        t=t+1;
        if(check(t))
        {
            break;
        }
    }
    printf("%d",t);
    return 0;
}
