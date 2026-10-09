void Putere(int n, int &x, int &p)
{
    int nr = 1;
    for (int i = 2; i <= n; i++)
    {
        int putere = 1;
        for (int j = i; j <= n; j = j * i)
        {
            if (j == n)
            {
                x = i;
                p = putere;
                return;
            }
            putere++;
        }
    }
}