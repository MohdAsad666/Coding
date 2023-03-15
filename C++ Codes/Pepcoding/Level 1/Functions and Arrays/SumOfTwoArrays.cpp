#include <bits/stdc++.h>
using namespace std;

void SumOfTwoArray(vector<int> a, vector<int> b)
{
    int lastIdxOfA = a.size() - 1, lastIdxOfB = b.size() - 1;
    int carry = 0;
    vector<int> res;
    auto addAndIncrement = [](vector<int> &arr, int &idx)
    {
        int total = 0;
        if (idx >= 0)
        {
            total += arr[idx];
            idx--;
        }
        return total;
    };
    while (lastIdxOfA >= 0 || lastIdxOfB >= 0)
    {
        int total = addAndIncrement(a, lastIdxOfA) + addAndIncrement(b, lastIdxOfB) + carry;
        carry = total / 10;
        res.push_back(total % 10);
    }
    for (int i = res.size() - 1; i >= 0; i--)
        cout << res[i] << " ";
}

int main()
{
    int n1, n2;
    cin >> n1;
    vector<int> a1(n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> a1[i];
    }

    cin >> n2;
    vector<int> a2(n2);
    for (int i = 0; i < n2; i++)
    {
        cin >> a2[i];
    }
    SumOfTwoArray(a1, a2);

    // write your code here
}