int interval(int a[], int n)
{
        int cnt = 0, aux;
        if (a[0] > a[n - 1])
        {
                aux = a[0];
                a[0] = a[n - 1];
                a[n - 1] = aux;
        }
        for (int i = 0; i < n; i++)
        {
                if (a[i] >= a[0] && a[i] <= a[n - 1])
                {
                        cnt++;
                }
        }
        return cnt;
}