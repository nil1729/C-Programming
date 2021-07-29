int main()
{
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    int p[n+1];
    p[0]=0;
    for(int i=1;i<=n;i++)
    {
        p[i]=m*2+p[i-1];
        if(k<=p[i])
        {
            int x=k-p[i-1],DESK,LANE=i;
            char POS;
            if(x%2==1)
            {
                DESK=(x+1)/2;
                POS='L';
            }
            else
            {
                DESK=x/2;
                POS='R';
            }
            printf("%d %d %c",LANE,DESK,POS);
            return 0;
        }
    }
    return 0;
}
