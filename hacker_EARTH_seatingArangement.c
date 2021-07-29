int main()
{
    int t;
    scanf("%d",&t);
    while(t)
    {
    int n;
    scanf("%d",&n);
    int x=n%12;
    switch(x)
    {
    case 1:
        {
            printf("%d WS\n",n+11);
            break;
        }
    case 2:
        {
            printf("%d MS\n",n+9);
            break;
        }
    case 3:
        {
            printf("%d AS\n",n+7);
            break;
        }
    case 4:
        {
            printf("%d AS\n",n+5);
            break;
        }
    case 5:
        {
            printf("%d MS\n",n+3);
            break;
        }
    case 6:
        {
            printf("%d WS\n",n+1);
            break;
        }
    case 7:
        {
            printf("%d WS\n",n-1);
            break;
        }
    case 8:
        {
            printf("%d MS\n",n-3);
            break;
        }
    case 9:
        {
            printf("%d AS\n",n-5);
            break;
        }
    case 10:
        {
            printf("%d AS\n",n-7);
            break;
        }
    case 11:
        {
            printf("%d MS\n",n-9);
            break;
        }
    default:
        {
            printf("%d WS\n",n-11);
            break;
        }
    }
    t--;
}
}
