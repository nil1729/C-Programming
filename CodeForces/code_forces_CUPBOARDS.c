int main()
{
    int n;
    scanf("%d",&n);
    int l[n],r[n];
    int l_cnt_0=0,l_cnt_1=0,r_cnt_0=0,r_cnt_1=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&l[i],&r[i]);
        if(l[i]==0)
            l_cnt_0++;
        else
            l_cnt_1++;
        if(r[i]==0)
            r_cnt_0++;
        else
            r_cnt_1++;
    }
    int count=0;
    if(l_cnt_0<l_cnt_1)
        count+=l_cnt_0;
    else
        count+=l_cnt_1;
    if(r_cnt_0<r_cnt_1)
        count+=r_cnt_0;
    else
        count+=r_cnt_1;
    printf("%d",count);
    return 0;

}
