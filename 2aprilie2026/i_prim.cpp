int i_prim(int n)
{
        int urmatorul_prim = -1;
        int m = n;
        while (urmatorul_prim == -1)
        {
                if (este_prim(m))
                {
                        urmatorul_prim = m;
                }
                m++;
        }
}