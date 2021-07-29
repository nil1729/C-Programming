int main()
{
    int s,n,x,y,d[1200]={},b[1200]={},count =0;
    scanf("%d %d",&s,&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&x,&y);
        d[i]=x;
        b[i]=y;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(d[j]>d[j+1])
            {
                int t=d[j];
                d[j]=d[j+1];
                d[j+1]=t;
                int m=b[j];
                b[j]=b[j+1];
                b[j+1]=m;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s>d[i])
        {
            count++;
        }
        s+=b[i];
    }
    if(count==n)
        printf("YES");
    else
        printf("NO");
    return 0;
}
