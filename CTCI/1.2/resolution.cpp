/* 
    Celso Antonio - November 2022
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool checkPermutation(string s1, string s2)
{
    if (s1.size() != s2.size())
        return false;

    unordered_map<char, int> hashTables2;
    
    for (int i = 0; i < s2.size(); i++)
    {
        auto it = hashTables2.find(s2[i]);
        
        if (it == hashTables2.end())
            hashTables2.emplace(s2[i], 1);
        else
            hashTables2[s2[i]]++;
    }
    
    for (int i = 0; i < s1.size(); i++)
    {
        auto it = hashTables2.find(s1[i]);
        
        if (it == hashTables2.end() || hashTables2[s1[i]] <= 0)
            return false;

        hashTables2[s1[i]]--;
    }

    return true;
}

bool checkPermutationSorting(string s1, string s2)
{
    if (s1.size() != s2.size())
        return false;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    return s1 == s2;
}

int main()
{
    string s1 = "elet";
    string s2 = "leet"; 
    
    string s3 = "elet";
    string s4 = "leea";
      
    if (checkPermutation(s1, s2))
        cout << "True" << endl;
      
    if (!checkPermutation(s3, s4))
        cout << "False" << endl;
        
    if (checkPermutationSorting(s1, s2))
        cout << "True" << endl;
      
    if (!checkPermutationSorting(s3, s4))
        cout << "False" << endl;
      
    return 0;
}