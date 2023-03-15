#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (vector<int> &x : matrix)
    {
        for (int &y : x)
            cin >> y;
    }
    for (vector<int> &x : matrix)
    {
        for (int &y : x)
            cout << y << " ";
        cout << endl;
    }
}