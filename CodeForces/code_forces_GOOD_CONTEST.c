int main()
{
    int n;
    scanf("%d",&n);
    char s[200][15];
    int f[200],l[200];
    for(int i=0;i<n;i++)
    {
        //scanf(" %s",s[i]);
        scanf("%s %d %d",s[i],&f[i],&l[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(f[i]>=2400 && l[i]>f[i])
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
