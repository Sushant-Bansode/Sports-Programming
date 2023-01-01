#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> t;
    int x = 1;
    while (1)
    {
        cin >> x;
        if (x == 42)
        {
            break;
        }
        else
        {
            t.push_back(x);
        }
    }

    for (auto y : t)
    {
        cout << y << endl;
    }
}