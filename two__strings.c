int main()// TIME  OUT  PROBLEM ????
{
    int t;
    scanf("%d",&t);
    for(int k=0;k<t;k++)
    {
        int count=0;
        char s1[10000],s2[10000];
        scanf("%s%s",s1,s2);
        int x=strlen(s1);
        int y=strlen(s2);
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                if(s1[i]==s2[j])
                {
                    count++;
                    break;
                }
            }
        }
        if(count>0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
//   TIM
