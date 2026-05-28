#include <iostream>

using namespace std;
int main()
{
	int n, m, A[105][105], maxim = -1, cnt, indici_maximi[105], nr_indici_maximi = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> A[i][j];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		cnt = 0;
		for (int j = 1; j <= m; j++)
		{
			if (A[i][j] % 2 == 0)
			{
				cnt++;
			}
		}
		if (cnt > maxim)
		{
			nr_indici_maximi = 1;
			maxim = cnt;
			indici_maximi[nr_indici_maximi] = i;
		}
		else if (cnt == maxim)
		{
			nr_indici_maximi++;
			indici_maximi[nr_indici_maximi] = i;
		}
	}
	for (int i = 1; i <= nr_indici_maximi; i++)
	{
		cout << indici_maximi[i] << " ";
	}
	return 0;
}
