int main()
{
    int N,Q,lastAnswer=0,index=0;
    scanf("%d %d",&N,&Q);
    int seq[N][N];
    int count[Q];
    for(int i=0;i<Q;i++)
        count[i]=0;
    int q,x,y,k=0;
    for(int i=0;i<Q;i++)
    {
        scanf("%d %d %d",&q,&x,&y);
        if(q==1)
        {
            index=((x^lastAnswer)%N);
            seq[index][count[index]++]=y;
        }
        else
        {
            index=((x^lastAnswer)%N);
            lastAnswer=seq[index][y];
            printf("%d",lastAnswer);
        }
    }
    return 0;
}
