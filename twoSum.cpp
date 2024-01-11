#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string read(int n, vector<int> book, int target)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (book[i] < target)
            c++;
    }
    if (c >= 2)
        return "YES";
    else
        return "NO";
}
