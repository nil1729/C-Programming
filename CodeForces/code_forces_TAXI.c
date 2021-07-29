int main()
{
    unsigned long long int n,a[120000],count[10]={};
    scanf("%llu",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%llu",&a[i]);
        count[a[i]]++;
    }
    unsigned long long int t=count[4];
    if(count[3]>=count[1])
    {
        t=t+count[3];
        unsigned long long int x=count[2]/2;
        unsigned long long int y=count[2]%2;
        t=t+x+y;
    }
    else
    {
        t=t+count[3];
        unsigned long long int p=count[1]-count[3];
        unsigned long long int x=count[2]/2;
        unsigned long long int y=count[2]%2;
        unsigned long long int q=p/4;
        unsigned long long int r=p%4;
        if(count[2]!=0)
        {
        if(r<3)
        {
            t=t+x+y+q;
        }
        else
        {
            t=t+x+y+q+1;
        }
        }
        else
        {
            if(r==0)
            {
                t=t+q;
            }
            else
            {
                t=t+q+1;
            }
        }
    }
    printf("%llu",t);
    return 0;
}
