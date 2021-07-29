int main()
{
    int n,k,arr[2500],c[2500],j=0,t[2500];
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        c[i]=arr[i]+k;
        if(c[i]<=5)
        {
            t[j]=c[i];
            j++;
        }
    }
    printf("%d",j/3);
    return 0;
}
