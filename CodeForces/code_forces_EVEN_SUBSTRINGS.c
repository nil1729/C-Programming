int main()
{
    int n,count=0;
    scanf("%d",&n);
    char s[70000];
    scanf("%s",s);
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]%2==0)
            count+=(i+1);
    }
    printf("%d",count);
    return 0;
}
