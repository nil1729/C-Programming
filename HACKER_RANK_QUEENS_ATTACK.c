int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int x,y;
    int l[8][k+100];
    int count[8]={};
    scanf("%d %d",&x,&y);
    for(int i=0;i<k;i++)
    {
        int r,c;
        scanf("%d %d",&r,&c);
        if(r==x || c==y)
        {
            if(r==x)
            {
                if(c<y)
                {
                    l[0][count[0]++]=c;
                }
                else
                {
                    l[4][count[4]++]=c;
                }
            }
            if(c==y)
            {
                if(r<x)
                {
                    l[2][count[2]++]=r;
                }
                else
                {
                    l[6][count[6]++]=r;
                }
            }
        }
        if(abs(r-x)==abs(c-y))
        {
            if(r<x && c<y)
                l[1][count[1]++]=r;
            if(r<x && c>y)
                l[3][count[3]++]=r;
            if(r>x && c>y)
                l[5][count[5]++]=r;
            if(r>x && c<y)
                l[7][count[7]++]=r;
        }
    }
    int L[8]={};
    int max[4]={1,1,1,1};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<count[i];j++)
            if(l[i][j]>max[i])
                max[i]=l[i][j];
        L[i]=max[i];
    }
    int min[8]={k,k,k,k,k,k,k,k};
    for(int i=4;i<8;i++)
    {
        for(int j=0;j<count[i];j++)
            if(l[i][j]<min[i])
                min[i]=l[i][j];
        L[i]=min[i];
    }
    for(int i=0;i<8;i++)
        printf("%d  ",L[i]);
    int cnt=0;
    for(int i=0;i<8;i++)
    {
        if(i==0 && i==4)
        {
            cnt+=abs(L[i]-y-1);
        }
        else
        {
            cnt+=abs(L[i]-x-1);
        }
    }
    printf("\n%d",cnt);
    return 0;

}
