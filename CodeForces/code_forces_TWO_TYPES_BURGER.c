int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int b,p,f;
        int h,c;
        scanf("%d %d %d",&b,&p,&f);
        scanf("%d %d",&h,&c);
        if(b/2 >= p+f)
        {
            int x= p*h + f*c;
            printf("%d\n",x);
        }
        else
        {
            int x=b/2;
            if(x<p && x<f)
            {
                if(c>=h)
                    printf("%d\n",c*x);
                else
                    printf("%d\n",h*x);
            }
            else
            {
                if(h<=c)
                {
                    if(x>f)
                    {
                        int y=c*f + (x-f)*h;
                        printf("%d\n",y);
                    }
                    else
                    {
                        printf("%d\n",c*x);
                    }
                }
                else
                {
                    if(x>p)
                    {
                        int y=h*p + (x-p)*c;
                        printf("%d\n",y);
                    }
                    else
                    {
                        printf("%d\n",h*x);
                    }
                }
            }
        }
    }
    return 0;
}
