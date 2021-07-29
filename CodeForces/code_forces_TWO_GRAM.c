int main()
{
    int n;
    scanf("%d",&n);
    char s[200],t[n-1][10];
    scanf("%s",s);
    char *p=s;
    for(int i=0;i<n-1;i++)
    {
        strncpy(t[i],p++,2);
        t[i][2]='\0';
    }
    int cnt[n-1];
    for(int i=0;i<n-1;i++)
        cnt[i]=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(strcmp(t[i],t[j])==0)
                cnt[i]++;
        }
    }
    int max=0,index=0;
    for(int i=0;i<n-1;i++){
        if(cnt[i]>max){
            max=cnt[i];
            index=i;
        }
    }
    printf("%s",t[index]);
    return 0;
}
