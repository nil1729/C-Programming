int main()
{
    int arr[10][10],x=0,y=0;
    for(int i=1;i<=5;i++)
    {
        scanf("%d %d %d %d %d",&arr[i][1],&arr[i][2],&arr[i][3],&arr[i][4],&arr[i][5]);
    }
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(arr[i][j]==1)
            {
                x=i;
                y=j;
                break;
            }
        }
        if(x!=0 || y!=0)
        {
            break;
        }
    }
    int swap=abs(x-3)+abs(y-3);
    printf("%d",swap);
    return 0;
}
