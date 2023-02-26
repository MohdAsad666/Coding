#include <bits/stdc++.h>
using namespace std;
bool PatternFormula(int i, int j, int n)
{
    return (j <= i);
}
void PatternMaker(int n)
{
    int Counter = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            string res = (PatternFormula(i,j,n)?to_string(Counter++)+"\t":"");
            cout<<res;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    PatternMaker(n);
}