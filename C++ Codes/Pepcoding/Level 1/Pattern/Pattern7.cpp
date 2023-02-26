#include <bits/stdc++.h>
using namespace std;

bool PatternFormula(int i, int j, int n, bool Zerobased)
{
    bool Condition = (i == j);
    return Condition;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            string res = (PatternFormula(i, j, n, true)
                              ? "*\t"
                              : "\t");
            cout << res;
        }
        cout << endl;
    }
}