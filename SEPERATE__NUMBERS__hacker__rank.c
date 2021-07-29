void to_string(char str[],long long int num)
{
    long long int i, rem, len = 0, n;

    n = num;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % 10;
        num = num / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';
}

/*int to_int(char str[])
{
    int len = strlen(str);
    int i, num = 0;

    for (i = 0; i < len; i++)
    {
        num = num + ((str[len - (i + 1)] - '0') * pow(10, i));
    }

   return num;
}*/
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        char s[50]={},a[50]={},temp[50]={};
        scanf(" %s",s);
        for(int i=1;i<=strlen(s)/2 && strcmp(temp,s);i++)
        {
            char t[50]={};
            strncpy(t,s,i);
            strcpy(a,t);
            printf("%s\t",a);
            for(long long int j=1;strlen(t)<strlen(s);j++)
            {
                long long int p=atoll(a);
                char q[50]={};
                to_string(q,p+j);
                strcat(t,q);
            }
            strcpy(temp,t);
            printf("%s\n",temp);
        }
        if(strcmp(s,temp))
            printf("NO\n");
        else
            printf("YES %s",a);
    }
    return 0;
}
