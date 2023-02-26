#include <bits/stdc++.h>
using namespace std;
void Pattern(int n)
{
    int PrintValue = 0;
    int a = 0, b = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<a<<'\t';
            int c = a+b;
            a = b;
            b = c;
        }
        cout << '\n';
    }
}
int main()
{
    int n;
    cin >> n;
    Pattern(n);
}