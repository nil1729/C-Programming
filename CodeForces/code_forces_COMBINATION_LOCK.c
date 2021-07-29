int main()
{
    int n,sum=0;
    scanf("%d",&n);
    char s1[2000],s2[2000];
    scanf("%s%s",s1,s2);
    for(int i=0;i<n;i++)
    {
        if(s1[i]>=s2[i])
        {
            int x=s1[i]-s2[i];
            //printf("%d  ",x);
            int y=10+s2[i]-s1[i];
            //printf("%d  ",y);
            if(x>=y)
                sum=sum+y;
            else
                sum=sum+x;
            //printf("%d\n",sum);
        }
        else
        {
            int x=s2[i]-s1[i];
            //printf("%d  ",x);
            int y=10+s1[i]-s2[i];
            //printf("%d  ",y);
            if(x>=y)
                sum=sum+y;
            else
                sum=sum+x;
            //printf("%d\n",sum);
        }
    }
    printf("%d",sum);
    return 0;
}
