/* 
    Celso Antonio - November 2022
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool bruteForceIsUnique(string& s)
{
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i + 1; j <= s.size(); j++)
        {
            if (s[i] == s[j])
                return false;
        }
    }
    
    return true;
}

bool sortingIsUnique(string s)
{
    sort(s.begin(), s.end());
    
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
            return false;
            
    }
    
    return true;
}

bool mapIsUnique(string& s)
{
    unordered_map<char, int> hashTable;
    
    for (int i = 0; i < s.size(); i++)
    {
        auto it = hashTable.find(s[i]);

        if (it == hashTable.end())
            hashTable.emplace(s[i], 1);
        else
            return false;
    }
    
    return true;
}

int main()
{
    string uniqueString = "let1234567 "; 
    string notUniqueString = "leet12312313123123";
   
    if (bruteForceIsUnique(uniqueString))   
        cout << "True" << endl;
    
    if (!bruteForceIsUnique(notUniqueString))   
        cout << "False" << endl;

    if (mapIsUnique(uniqueString))   
        cout << "True" << endl;
    
    if (!mapIsUnique(notUniqueString))   
        cout << "False" << endl;

    if (sortingIsUnique(uniqueString))   
        cout << "True" << endl;
    
    if (!sortingIsUnique(notUniqueString))   
        cout << "False" << endl;
        
    return 0;
}