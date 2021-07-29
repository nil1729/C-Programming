int main()
{
    int t;
    scanf("%d",&t);
    for(int k=0;k<t;k++)
    {
        char s[1002];
        int count=0;
        scanf("%s",s);
        int x = strlen(s);
        if(x%2==1)
        {
            printf("-1\n");
        }
        else
        {
           for(int i=0;i<x/2;i++)
           {
            for(int j=x/2;j<x;j++)
            {
                if(s[i]==s[j])
                {
                    //character change
                    count++;
                    break;
                }
            }
           }
            printf("%d\n",x/2-count);
        }

    }
    return 0;
}
