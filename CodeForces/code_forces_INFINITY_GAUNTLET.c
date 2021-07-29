int main()
{
    int n,count[10]={};
    scanf("%d",&n);
    char s[10][20];
    for(int i=0;i<n;i++)
    {
        scanf("%s",s[i]);
        if(s[i][0]=='p')
            count[0]++;
        if(s[i][0]=='g')
            count[1]++;
        if(s[i][0]=='b')
            count[2]++;
        if(s[i][0]=='o')
            count[3]++;
        if(s[i][0]=='r')
            count[4]++;
        if(s[i][0]=='y')
            count[5]++;
    }
    char s1[6][10]={"Power","Time","Space","Soul","Reality","Mind"};
    printf("%d\n",6-n);
    for(int i=0;i<6;i++)
    {
        if(count[i]==0)
        {
            printf("%s\n",s1[i]);
        }
    }
    return 0;
}
