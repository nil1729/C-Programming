int main()
{
    int n,cnt=0,count=0;
    scanf("%d",&n);
    char s[200];
    scanf("%s",s);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='x')
        {
            cnt++;
            if(cnt>=3)
                count++;
        }
        else
        {
            cnt=0;
        }
    }
    printf("%d",count);
    return 0;
}
