int TreiCifImp(int n)
{
        int cnt_curent = 0; // cate numere la rand au fost impare
        bool am_gasit_3_consecutive = false;
        while (n != 0)
        {
                if (n % 2 == 1)
                {
                        cnt_curent++;
                }
                else
                {
                        cnt_curent = 0;
                }
                if (cnt_curent == 3)
                {
                        am_gasit_3_consecutive = true;
                }
                n /= 10;
        }
        return am_gasit_3_consecutive;
}