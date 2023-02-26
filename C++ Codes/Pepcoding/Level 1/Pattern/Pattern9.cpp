#include<bits/stdc++.h>
using namespace std;
bool PatternFormula(int i, int j,int n,bool Zerobased){
    bool Condition1 = (i+j == (n)+(Zerobased?-1:1)),Condition2 = (i==j);
    return (Condition1 || Condition2);
}
int main(){
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