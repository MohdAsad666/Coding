#include <bits/stdc++.h>
using namespace std;
void NearestDenomination(int denomination, vector<int> &v)
{
    int minLess = INT_MAX, minGreat = INT_MAX, lessThan, moreThan;

    for (int x : v)
    {
        if (x <= denomination && minLess >= denomination - x)
        {
            minLess = denomination - x;
            lessThan = x;
        }
        else if (x >= denomination && minGreat >= x - denomination)
        {
            {
                minGreat = x - denomination;
                moreThan = x;
            }
        }
    }

    function<void()> printer = [&moreThan, &lessThan]() -> void
    {
        if (moreThan == lessThan)
        {
            cout << moreThan;
        }
        else
        {
            cout << moreThan << '\n'
                 << lessThan;
        }
    };
    printer();
}
int main()
{
    int size, denomination;         
    cin >> size;
    vector<int> v(size, 0);
    for (int &x : v)
    {
        cin >> x;
    }
    cin >> denomination;
    NearestDenomination(denomination, v);
}