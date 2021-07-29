int main()
{
    int n;
    scanf("%d",&n);
    int x=1,k=1;
    for(int i=1;i<n;i++)
    {
        if((x+k)%n!=0){
        printf("%d ",(x+k)%n);
        x=(x+k)%n;
        k++;
        }
        else
        {
            printf("%d ",n);
            x=(x+k)%n;
            k++;
        }
    }
    return 0;
}
