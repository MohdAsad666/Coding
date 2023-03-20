#include <bits/stdc++.h>
using namespace std;
void ExitPointOfAMatrix(auto &v)
{
    unordered_map<string, string> direction = {{"n", "e"},
                                               {"e", "s"},
                                               {"s", "w"},
                                               {"w", "e"}};
    function<bool(int, int)> OutOfMatrix = [&v](int i, int j) -> bool
    {
        if (((i < 0 || i >= v.size()) || (j < 0 || j >= v[0].size())))
        {
            return true;
        }
        return false;
    };
    unordered_map<char, function<vector<int>(int, int)>>
        changeDirection = {};
    changeDirection['n'] = [&v, &OutOfMatrix](int i, int j) -> vector<int>
    {
        if (OutOfMatrix(i, j + 1))
        {
            return {};
        }
        return {i, j + 1};
    };
    changeDirection['s'] = [&v, &OutOfMatrix](int i, int j) -> vector<int>
    {
        if (OutOfMatrix(i, j - 1))
            return {};
        return {i, j - 1};
    };
    changeDirection['e'] = [&v, &OutOfMatrix](int i, int j) -> vector<int>
    {
        if (OutOfMatrix(i + 1, j))
            return {};
        return {i + 1, j};
    };
    changeDirection['w'] = [&v, &OutOfMatrix](int i, int j) -> vector<int>
    {
        if (OutOfMatrix(i - 1, j))
            return {};
        return {i - 1, j};
    };

    unordered_map<char, function<vector<int>(int, int)>> moveForward = {};
    moveForward['n'] = [&v, &OutOfMatrix](int i, int j) -> vector<int>
    {
        if (OutOfMatrix(i - 1, j))
            return {};
        return {i - 1, j};
    };
    moveForward['s'] = [&v, &OutOfMatrix](int i, int j) -> vector<int>
    {
        if (OutOfMatrix(i + 1, j))
            return {};
        return {i + 1, j};
    };
    moveForward['e'] = [&v, &OutOfMatrix](int i, int j) -> vector<int>
    {
        if (OutOfMatrix(i, j + 1))
            return {};
        return {i, j + 1};
    };
    moveForward['w'] = [&v, &OutOfMatrix](int i, int j) -> vector<int>
    {
        if (OutOfMatrix(i, j - 1))
            return {};
        return {i, j - 1};
    };

    int x = 0, y = 0;
    char currDir = 'e';
    while (true)
    {
        if (v[x][y] == 0)
        {
            auto cord = moveForward[currDir](x, y);
            if (cord.size() == 0)
                break;
            x = cord[0], y = cord[1];
        }
        else
        {
            auto cord = changeDirection[currDir](x, y);
            if (cord.size() == 0)
                break;
            x = cord[0], y = cord[1];
        }
    }
    cout << x << " " << y << endl;
};
int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> res(m, vector<int>(n, 0));
    for (auto &x : res)
        for (auto &y : x)
            cin >> y;
    ExitPointOfAMatrix(res);
}
