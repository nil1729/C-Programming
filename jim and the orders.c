int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}

int main()
{
    int n,count=0;
    scanf("%d",&n);
    int jim[n][2],t[n],s[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&jim[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        t[i]=jim[i][0]+jim[i][1];
        //s[i]=t[i];
    }
    /*qsort (s, n, sizeof(int), comparetor );
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[i]==t[j])
            {
                printf("%d ",j+1);
                count++;
            }

        }
        if(count==n)
            break;
    }*/
long long int min=0,gk=10000000;
for(int i=0;i<n;i++){
min=t[n-1];
long long int ans;
for(int j=n-1;j>=0;j--){
if(min>=t[j]&&t[j]!=gk){min=t[j];ans=j;}
}
// cout<<endl;
t[ans]=gk;
printf("%lld ",ans+1);
}
return 0;
}
