int main()
{
    char s[120]={},t[120]={};
    int n;
    scanf("%s",s);
    scanf(" %s",t);
    scanf("%d",&n);
    int l1=strlen(s);
    int l2=strlen(t);
    int k=0;
    while(s[k]!='\0' && t[k]!='\0')
    {
        if(s[k]==t[k])
            k++;
        else
            break;
    }
    if(k<l2 && k<l1)
    {
        int x=l1+l2-2*k;
        if(x==n || n==l1+l2+1 || n==l1+l2)
            printf("YES");
        else
        {
            if(n<x)
                printf("NO");
            else
            {
                int a=n-x;
                int b=n-l1-l1;
                int c=n-l1-l2-1;
                if(a%2==0)
                    printf("Yes");
                else
                    printf("No");
            }

        }
        return 0;
    }
    else
    {
        if(l1==l2)
        {
            if(n==l1+l2 || n==0 || n==l1+l2+1)
                printf("YES");
            else
            {
                if(n%2==0)
                    printf("Yes");
                else
                    printf("NO");
            }
            return 0;
        }
        if(l1>l2)
        {
            if(n==l1-l2 || n==l1+l2 || n==l1+l2+1)
                printf("YES");
            else
            {
                if(n>l1-l2)
                {
                    int a=n-(l1-l2);
                    if(a%2==0)
                        printf("Yes");
                    else
                        printf("No");
                }
                else
                    printf("NO");
            }

            return 0;
        }
        if(l1<l2)
        {
            if(n==l2-l1 || n==l1+l2 || n==l1+l2+1)
                printf("YES");
            else
            {
                if(n>l2-l1)
                {
                    int a=n-(l2-l1);
                    if(a%2==0)
                        printf("Yes");
                    else
                        printf("No");
                }
                else
                    printf("NO");
            }
            return 0;
        }
    }
    return 0;
}
