#include <iostream>

using namespace std;

//ifstream fin("bac.txt");

int main()
{
    int x, v[101], cnt=0, max=-1;         //max=8
    bool gasit1=false, gasit2=false;
    int primul_nr, ultimul_nr;
    while(cin >> x)
    {
        v[cnt]=x;
        cnt++;
    }
    for(int i=0; i<cnt; i++)         //27 38 42 23 58 22
    {
        int nr=v[i];                 //i=1
        while(nr)                    //nr=0
        {
            if(nr%10>max)
            {
                max=nr%10;
            }
            nr/=10;
        }
    }                                //primul_nr=38
    for(int i=0; i<cnt; i++)         //max=8
    {                                //i=5
        if(gasit1==false)            //gasit1=true
        {
            int nr=v[i];             //nr=22
            while(nr)
            {
                if(nr%10==max)
                {
                    primul_nr=v[i];
                    gasit1=true;
                    break;
                }
                nr/=10;
            }
        }
        else
        {
            int nr=v[i];
            while(nr)
            {
                if(nr%10==max)
                {
                    ultimul_nr=v[i];      //ultimul_nr=58
                    gasit2=true;          //gasit2=true
                    break;
                }
                nr/=10;
            }
        }
    }
    if(gasit1==true && gasit2==true)
    {
        cout << primul_nr << " " << ultimul_nr;
    }
    else
    {
        cout << "nu exista";
    }
    return 0;
}
