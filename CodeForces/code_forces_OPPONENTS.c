int main()
{
    int n,d,k=0,count=0,a[200]={};
    scanf("%d %d",&n,&d);
    char s[200][200];
    for(int i=0;i<d;i++)
    {
        scanf("%s",s[i]);
    }
    for(int i=0;i<d;i++)
    {
        int flag=0;
        for(int j=0;j<n;j++)
        {
            if(s[i][j]=='1')
            {
                flag++;
            }
        }
        if(flag!=n)
            count++;
        else
        {
            a[k]=count;
            k++;
            count=0;
        }
    }
    if(count!=0)
        a[k]=count;
    else
        k--;
    //for(int i=0;i<=k;i++)
      //  printf("%d ",a[i]);
    int max=0;
    for(int i=0;i<=k;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("%d",max);
    return 0;
}
