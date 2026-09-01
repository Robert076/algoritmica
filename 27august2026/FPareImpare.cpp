int FPareImpare(int n)
{
    if (n < 10)
    {
        if (n % 2 == 0)
        {
            return 1; // cnt++;
        }
        else
        {
            return -1; // cnt--; // daca la final cnt == 0 => acelasi nr de cifre pare cu nr de cifre impare
        }
    }
    else if (n % 2 == 0)
    {
        return FPareImpare(n / 10) + 1;
    }
    else
    {
        return FPareImpare(n / 10) - 1;
    }
}