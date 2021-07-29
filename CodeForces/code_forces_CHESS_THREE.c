int main()
{
    int n,lost,win;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    win=arr[0];
    if(win==1)
    {
        lost=2;
    }
    else
    {
        lost=1;
    }
    if(win==3)
    {
        printf("NO");
        return 0;
    }
    int flag[6]={};
    //printf("WIN=%d LOST=%d\n",win,lost);
    for(int i=1;i<n;i++)
    {
        if(arr[i]==lost)
        {
            printf("NO");
            return 0;
        }
        else
        {
            win=arr[i];
            if(lost==1 && win==2)
            {
                flag[0]++;
                lost=3;
                continue;
            }

            if(lost==1 && win==3)
            {
                flag[1]++;
                lost=2;
                continue;
            }

            if(lost==2 && win==1)
            {
                flag[2]++;
                lost=3;
                continue;
            }

            if(lost==2 && win==3)
            {
                flag[3]++;
                lost=1;
                continue;
            }

            if(lost==3 && win==1)
            {
                flag[4]++;
                lost=2;
                continue;
            }

            if(lost==3 && win==2)
            {
                flag[5]++;
                lost=1;
                continue;
            }
            /*for(int j=0;j<6;j++)
                printf("%d  ",flag[j]);*/
        }
    }
    printf("YES");
    return 0;
}
