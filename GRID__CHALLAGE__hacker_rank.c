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
        int n;
        scanf("%d",&n);
        char s[100][100];
        for(int i=0;i<n;i++)
            scanf("%s",s[i]);
        for(int i=0;i<n;i++)
            qsort (s[i], n, sizeof(char), comparetor );
        int flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(s[j]>s[j+1])
                    flag++;
            }
        }
        if(flag==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
