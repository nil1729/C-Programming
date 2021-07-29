int main()
{
    char s[100];
    scanf("%s",s);
    char stack[100];
    top=-1;
    for(int i=0;i<strlen(s);i++)
    {
        if(i==0)
            stack[++top]=s[i];
        else
        {
            if(stack[top]==s[i])
                --top;
            else
                stack[++top]=s[i];
        }
    }
    if(top==-1)
        printf("Empty String");
    else
    {
        for(int i=0;i<=top;i++)
            printf("%c",stack[i]);
    }
    return 0;
}
