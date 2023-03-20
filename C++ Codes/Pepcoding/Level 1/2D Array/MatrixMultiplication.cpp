#include <bits/stdc++.h>
using namespace std;

void MatrixMulti(vector<vector<int>> &a, vector<vector<int>> &b)
{
    vector<vector<int>> res(a.size(), vector<int>(b[0].size(), 0));
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b[0].size(); j++)
        {
            auto cellValue = [&a, &b, i, j]()
            {
                int result = 0;
                for (int k = 0; k < a[0].size(); k++)
                {
                    result += a[i][k] * b[k][j];
                }
                return result;
            };
            res[i][j] = cellValue();
        }
    }
    for (auto &x : res)
    {
        for (auto &y : x)
            cout << y << " ";
        cout << endl;
    }
}

int main()
{
    int m1, n1, m2, n2;
    cin >> m1 >> n1;
    vector<vector<int>> a(m1, vector<int>(n1, 0));
    for (auto &x : a)
    {
        for (auto &y : x)
            cin >> y;
    }
    cin >> m2 >> n2;
    vector<vector<int>> b(m2, vector<int>(n2, 0));
    for (auto &x : b)
    {
        for (auto &y : x)
            cin >> y;
    }
    MatrixMulti(a, b);
}