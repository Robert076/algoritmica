bool prim(int n)
{
    if (n == 0 || n == 1)
        return false;
    if (n > 2 && n % 2 == 0)
        return false;
    for (int d = 3; d * d <= n; d += 2)
    {
        if (n % d == 0)
            return false;
    }
    return true;
}
void DNPI(int n)
{
    for (int d = 1; d <= n; d += 2)
    {
        if (n % d == 0)
        {
            if (!(prim(d)))
            {
                cout << d << " ";
            }
        }
    }
}
