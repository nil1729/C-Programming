int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][50];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int k=0;k<n;k++)
    {
        for(int l=0;l<n;l++)
        {
            if(arr[k][l]!=1)
            {
                int flag=0;
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        if(i!=l && j!=k && (arr[k][i]+arr[j][l]==arr[k][l]))
                        {
                            flag++;
                            break;
                        }
                    }
                }
                if(flag==0)
                {
                    printf("No");
                    return 0;
                }
            }
        }
    }
    printf("Yes");
    return 0;
}
