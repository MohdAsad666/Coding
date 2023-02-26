// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int mid = (n-1)/2;
//     for (int i = 0; i < n; i++)
//     {
//         for(int j = 0;j<n;j++){
//             bool printStar = (j>=mid-(i%mid) && j<=mid+(i%mid) || i == mid);
//             cout<<(printStar?"*\t":"\t");
//         }
//         cout<<endl;
//     }
// }
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    int mid = n / 2, sp = mid, st = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < sp; j++)
        {
            cout << "	";
        }
        for (int j = 0; j < st; j++)
        {
            cout << "*	";
        }
        if (i < mid)
        {
            sp--;
            st = st + 2;
        }
        else
        {
            sp++;
            st = st - 2;
        }
        cout << endl;
    }
}