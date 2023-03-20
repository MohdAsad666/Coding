#include <bits/stdc++.h>
using namespace std;
void TheStateOfWakanda(vector<vector<int>> &res)
{
    for (int j = 0; j < res[0].size(); j++)
    {
        if ((j & 1))
        {
            for (int i = res.size() - 1; i >= 0; i--)
            {
                cout << res[i][j] << endl;
            }
        }
        else
        {
            for (int i = 0; i < res.size(); i++)
            {
                cout << res[i][j] << endl;
            }
        }
    }
}
int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> res(m, vector<int>(n, 0));
    for (auto &x : res)
    {
        for (auto &y : x)
            cin >> y;
    }
    TheStateOfWakanda(res);
}
