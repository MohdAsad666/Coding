#include <bits/stdc++.h>
using namespace std;
void RotateAnArray(vector<int> &v, int k)
{
    int rotations = k % v.size();
    for (int i = 0; i < rotations; i++)
    {
        int back = v.back();
        v.pop_back();
        v.insert(v.begin(), back);
    }
    for (int &a : v)
        cout << a << " ";
}
int main()
{
    int n, k;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cin >> k;
    RotateAnArray(v, k);
}