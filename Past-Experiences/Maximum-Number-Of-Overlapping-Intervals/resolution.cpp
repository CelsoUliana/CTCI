/*
    Celso Antonio - November 2022
*/
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int maximumNumberOfOverlaps(vector<pair<int, int>>& v)
{
    vector<pair<int, char>> newList;
    
    for (auto p: v)
    {
        newList.push_back(make_pair(p.first, 'x'));
        newList.push_back(make_pair(p.second, 'y'));
    }
    
    sort(newList.begin(), newList.end());
    
    int count = 0;
    int ans = 0;
    
    for (auto p: newList)
    {
        if (p.second == 'x')
            count++;
            
        if (p.second == 'y')
            count--;
            
        ans = max(ans, count);
    }
    
    return ans;
}

int main()
{
    vector<pair<int, int>> schedule =
    {{1, 5}, {4, 6}, {10, 30}, {20, 35}, {29, 100}};
    
    cout << maximumNumberOfOverlaps(schedule) << endl;;

    return 0;
}