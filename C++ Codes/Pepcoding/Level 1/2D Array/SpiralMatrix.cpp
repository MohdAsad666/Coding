#include <bits/stdc++.h>
using namespace std;
void SpiralMatrix(vector<vector<int>> &v)
{
    if (!v.size() || !v[0].size())
        return;
    int NoOfElement = v.size() * v[0].size();
    int t = 0, b = v.size() - 1, l = 0, r = v[0].size() - 1;
    while (NoOfElement)
    {
        for (int i = t; i <= b && NoOfElement; i++)
        {
            cout << v[i][l] << endl;
            NoOfElement--;
        }
        l++;
        for (int j = l; j <= r && NoOfElement; j++)
        {
            cout << v[b][j] << endl;
            NoOfElement--;
        }
        b--;
        for (int i = b; i >= t && NoOfElement; i--)
        {
            cout << v[i][r] << endl;
            NoOfElement--;
        }
        r--;
        for (int j = r; j >= l && NoOfElement; j--)
        {
            cout << v[t][j] << endl;
            NoOfElement--;
        }
        t++;
    }
}
int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> res(m, vector<int>(n, 0));
    for (auto &x : res)
        for (auto &y : x)
            cin >> y;
    SpiralMatrix(res);
}
