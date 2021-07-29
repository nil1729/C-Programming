int main()
{
    int n;
    scanf("%d",&n);
    char t[10];
    scanf("%s",t);
    char s[n][10];
    for(int i=0;i<n;i++)
    {
        scanf("%s",s[i]);
    }
    if(n%2==0)
    {
        printf("home");
        return 0;
    }
    else
    {
        printf("contest");
        return 0;
    }
}
