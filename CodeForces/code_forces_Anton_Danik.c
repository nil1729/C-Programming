int main()
{
    int n,c_A=0,c_D=0;
    scanf("%d",&n);
    char s[1000200];
    scanf("%s",s);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
            c_A++;
        if(s[i]=='D')
            c_D++;
    }
    if(c_A==c_D)
    {
        printf("Friendship");
    }
    else
    {
        if(c_A>c_D)
            printf("Anton");
        else
            printf("Danik");
    }
    return 0;
}
