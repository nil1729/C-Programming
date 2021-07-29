	int comparetor (const void * a, const void * b)
	{
		return ( *(char*)a - *(char*)b );
	}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        char s[200];
        scanf("%s",s);
        int n=strlen(s);
        qsort (s, n, sizeof(char), comparetor );
        int cnt[26]={};
        int flag=0;
        for(int i='a';i<='z';i++)
        {
            for(int j=0;j<n;j++)
            {
                if(s[j]==i)
                {
                    cnt[i-'a']++;
                    if(cnt[i-'a']>1)
                    {
                        flag++;
                        break;
                    }
                }
            }
            if(flag!=0)
                break;
        }
        if(flag==0)
        {
            int t=0;
            for(int i=0;i<n-1;i++)
            {
                if(abs(s[i+1]-s[i])!=1)
                {
                    t++;
                    printf("No\n");
                    break;
                }
            }
            if(t==0)
                printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
