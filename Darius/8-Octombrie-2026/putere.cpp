void Putere(int n, int &x, int &p)
{
    int nr = 1;
    for (int i = 2; i <= n; i++)
    {
        x = i;
        for (int j = 1; j <= n; j++)
        {
            p = j;
            for (int l = 1; l <= p; l++)
            {
                nr = nr * i;
            }
            if (nr == n)
            {
                return; // aici x si p sunt prima combinatie care merge, deci dau return
            }
        }
    }
}