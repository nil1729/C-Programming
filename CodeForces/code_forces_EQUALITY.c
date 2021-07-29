int main()
{
    int n,k,count[100]={};
    scanf("%d %d",&n,&k);
    char s[100200];
    scanf("%s",s);
    for(int i='A';i<=64+k;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[j]==i)
                count[i]++;
        }
    }
    int min=100200;
    for(int i='A';i<=64+k;i++)
    {
        if(count[i]<min)
            min=count[i];
    }
    printf("%d",min*k);
    return 0;
}
