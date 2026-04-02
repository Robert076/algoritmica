int detcifre(int n, int &p, int &u)
{
        u = n % 10;
        while (n >= 10)
        {
                n = n / 10;
        }
        p = n;
}
