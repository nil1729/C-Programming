int main()
{
    int s1,s2,s3,s4,count=0;
    scanf("%d %d %d %d",&s1,&s2,&s3,&s4);
    if(s1==s2 || s1==s3 || s1==s4)
        count++;
    if(s2==s3 || s2==s4)
        count++;
    if(s3==s4)
        count++;
    printf("%d",count);
    return 0;
}
