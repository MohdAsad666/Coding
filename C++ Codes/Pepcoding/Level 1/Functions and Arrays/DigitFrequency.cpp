#include <bits/stdc++.h>
using namespace std;
int StringifyingTechnique(int num, int d)
{
    /*
    Time Complexity :: 2 * 10^9
    Space Complexity :: 10^9
    */
    int count = 0;
    char charedD = d + '0';
    string numString = to_string(num);
    for (char &c : numString)
        count += (charedD == c ? 1 : 0);
    return count;
}

int EvaluateLastDigitApproach(int num, int d)
{
    /*
    Time Complexity :: 10^9
    Space Complexity :: O(1)
    */
    int count = 0;
    while (num % 10)
    {
        int lastNum = num % 10;
        count += (lastNum == d ? 1 : 0);
        num /= 10;
    }
    return count;
}
int main()
{

    int num, d;
    cin >> num >> d;
    cout << EvaluateLastDigitApproach(num, d) << endl;
    return 0;
}