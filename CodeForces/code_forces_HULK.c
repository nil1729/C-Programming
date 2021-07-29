int main()
{
    int n;
    scanf("%d",&n);
    while(n>0)
    {
        printf("I hate ");
        n--;
        if(n>0)
        {
            printf("that I love ");
        }
        n--;
        if(n>0)
        {
            printf("that ");
        }
    }
    printf("it");
    return 0;
}
