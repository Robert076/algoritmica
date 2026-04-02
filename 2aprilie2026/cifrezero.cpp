int nr_cif_zero(int n, int nr = 0)
{
        if (n == 0)
                return 1;
        while (n != 0)
        {
                if (n % 10 == 0)
                {
                        nr++;
                }
                n = n / 10;
        }
        return nr;
}
