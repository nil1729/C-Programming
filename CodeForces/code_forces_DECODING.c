int main()
{
    int n;
    scanf("%d",&n);
    char s[3000];
    scanf("%s",s);
    char a[3000]={};
    if(n%2==1)
    {
        int left=1,right=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                a[n/2+right]=s[i];
                right++;
            }
            else
            {
                a[n/2-left]=s[i];
                left++;
            }
        }
    }
    else
    {
        int left=0,right=1,x=(n-1)/2;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                a[x-left]=s[i];
                left++;
            }
            else
            {
                a[x+right]=s[i];
                right++;
            }
        }
    }
    printf("%s",a);
    return 0;
}
