int main()
{
    int n,sum_a=0,sum_a_t=0,sum_b=0,sum_b_t=0;
    scanf("%d",&n);
    int s[1050][5];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&s[i][0],&s[i][1],&s[i][2]);
        if(s[i][0]==1)
        {
            sum_a+=s[i][1];
            sum_a_t+=(s[i][1]+s[i][2]);
        }
        if(s[i][0]==2)
        {
            sum_b+=s[i][1];
            sum_b_t+=(s[i][1]+s[i][2]);
        }
    }
    if(2*sum_a>=sum_a_t)
        printf("LIVE\n");
    else
        printf("DEAD\n");
    if(2*sum_b>=sum_b_t)
        printf("LIVE\n");
    else
        printf("DEAD\n");
    return 0;
}
