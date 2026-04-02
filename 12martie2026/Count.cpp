int count(double a[], int n)
{
        double s = 0;
        int nr = 0;
        for (int i = 0; i < n; i++)
        {
                s = s + a[i];
        }
        for (int i = 0; i < n; i++)
        {
                if (a[i] >= s / n)
                {
                        nr++;
                }
        }
        return nr;
}