int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int x,y;
    scanf("%d %d",&x,&y);
    int r,c;
    int left=y-1,right=n-y,up=n-x,down=x-1;

    int left_up=0,left_down=0,right_up=0,right_down=0;
    int k=1;
    while(k<=n)
    {
        int X1=x+k,Y1=y+k;
        if(X1<=n && Y1<=n)
            right_up++;
        int X2=x+k,Y2=y-k;
        if(X2<=n && Y2>=1)
            left_up++;
        int X3=x-k,Y3=y-k;
        if(X3>=1 && Y3>=1)
            left_down++;
        int X4=x-k,Y4=y+k;
        if(X4>=1 && Y4<=n)
            right_down++;
        k++;
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d %d",&r,&c);
        if(r==x || c==y)
        {
            if(r==x)
            {
                if(c<y)
                {
                    left = left>(y-c-1)?(y-c-1):left;
                }
                else
                {
                    right = right>(c-y-1)?(c-y-1):right;
                }
            }
            if(c==y)
            {
                if(r<x)
                {
                    down = down>(x-r-1)?(x-r-1):down;
                }
                else
                {
                    up = up>(r-x-1)?(r-x-1):up;
                }
            }
        }
        if(abs(r-x)==abs(c-y))
        {
            if(r<x && c<y)
            {
                left_down = left_down>(x-r-1)?(x-r-1):left_down;
            }
            if(r<x && c>y)
            {
                right_down = right_down>(x-r-1)?(x-r-1):right_down;
            }
            if(r>x && c>y)
            {
                right_up = right_up>(r-x-1)?(r-x-1):right_up;
            }
            if(r>x && c<y)
            {
                left_up = left_up>(r-x-1)?(r-x-1):left_up;
            }
        }
    }
    printf("%d",up+down+left+right+left_down+left_up+right_down+right_up);
    return 0;
}
