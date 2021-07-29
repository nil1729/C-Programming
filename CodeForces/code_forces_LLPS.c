	int comparetor (const void * a, const void * b)
	{
		return ( *(char*)a - *(char*)b );
	}
int main()
{
    char s[11]={};
    scanf("%s",s);
    int n=strlen(s);
    qsort (s, n, sizeof(char), comparetor );
    //printf("%c\n",s[n-1]);
    for(int i=n-1;i>=0;i--)
    {
        printf("%c",s[i]);
        if(s[i-1]!=s[i])
            break;
    }
    return 0;
}
