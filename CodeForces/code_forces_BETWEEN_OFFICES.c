int main()
{
    int n,c_S=0,c_F=0;
    scanf("%d",&n);
    char s[200];
    scanf("%s",s);
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='S' && s[i+1]=='F')
            c_S++;
        if(s[i]=='F' && s[i+1]=='S')
            c_F++;
    }
    if(c_S > c_F)
        printf("YES");
    else
        printf("NO");
    return 0;
}
