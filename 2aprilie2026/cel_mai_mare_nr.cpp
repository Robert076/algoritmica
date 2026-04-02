int cmmnr(int n)
{
        int f[10] = {0};
        while (n != 0)
        {
                f[n % 10]++;
                n /= 10;
        }
        int rez = 0;
        for (int i = 9; i >= 0; i--)
        {
                while (f[i] > 0)
                {
                        rez = rez * 10 + i;
                        f[i]--;
                }
        }

        return rez;
}