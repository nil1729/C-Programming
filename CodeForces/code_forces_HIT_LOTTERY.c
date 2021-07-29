int main()
{
    int n;
    scanf("%d",&n);
    int m_100=n/100;
    int rem=n-100*m_100;
    int m_20=rem/20;
    rem=rem-20*m_20;
    int m_10=rem/10;
    rem=rem-10*m_10;
    int m_5=rem/5;
    rem=rem-5*m_5;
    int m_1=rem;
    printf("%d",m_100+m_20+m_10+m_5+m_1);
    return 0;
}
