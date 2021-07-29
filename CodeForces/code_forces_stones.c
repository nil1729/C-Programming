int main()
{
    int n,count=0;
    scanf("%d",&n);
    char s[100];
    scanf("%s",s);
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
