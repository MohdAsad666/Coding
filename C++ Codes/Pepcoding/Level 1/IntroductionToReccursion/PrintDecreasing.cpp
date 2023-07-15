#include <bits/stdc++.h>
using namespace std;

function<void(int n)> PrintDecreasing = [](int n) -> void
{
    if (n <= 0)
    {
        return;
    }
    cout << n << endl;
    PrintDecreasing(n - 1);
    cout << n << endl;
};

int main()
{
    int n;
    cin >> n;
    PrintDecreasing(n);
}