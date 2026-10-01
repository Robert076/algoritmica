bool nr_div(int n)
{
    int nr = 0;
    for (int d = 1; d <= n; d += 2)
    {
        if (n % d == 0)
        {
            nr++;
        }
    }
    if (nr == 3)
        return 1;
    return 0;
}
void NrImp(int x, int y, int &nr)
{
    nr = 0;
    for (int i = x; i <= y; i++)
    {
        if (nr_div(i))
        {
            nr++;
        }
    }
}