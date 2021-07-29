int main()
{
    int n;
    scanf("%d",&n);
    char s[200];
    scanf(" %s",s);
    int cnt=0,j=0,a[100],grp=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B')
        {
            cnt++;
        }
        else
        {
            if(cnt>0)
            {
                a[j]=cnt;
                j++;
                grp++;
            }
            cnt=0;
        }
    }
    if(cnt>0)
    {
        grp++;
        a[j]=cnt;
    }
    else
        j--;
    printf("%d\n",grp);
    if(j>=0)
    {
        for(int i=0;i<j;i++)
        {
            printf("%d ",a[i]);
        }
        printf("%d\n",a[j]);
    }
    return 0;
}
