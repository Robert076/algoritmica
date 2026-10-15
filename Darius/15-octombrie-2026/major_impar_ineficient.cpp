int majorImpar(int n)
{
    int si=0;
    int sp=0;
    for(int d=2;d<=n/2;d++)
    {
        if(n%d==0)
        {
            if(d%2==0)
                sp+=d;
            else si+=d;
        }
    }
    if(si>sp)
        return 1;
    return 0;
}
int majImpar(int a, int b)
{
    for(int i=a;i<=b;i++)
    {
        if(majorImpar(i))
        {
            return i;
        }
    }
    return 0;
}
