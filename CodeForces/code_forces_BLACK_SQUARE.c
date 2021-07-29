int main()
{
    int a[5]={},sum=0;
    scanf("%d %d %d %d",&a[1],&a[2],&a[3],&a[4]);
    char s[100200];
    scanf(" %s",s);
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
            sum+=a[1];
        if(s[i]=='2')
            sum+=a[2];
        if(s[i]=='3')
            sum+=a[3];
        if(s[i]=='4')
            sum+=a[4];
    }
    printf("%d",sum);
    return 0;
}
