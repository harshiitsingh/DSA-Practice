#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> strs {"flower","flow","flight"};
    // sorted according to albhabet not length
    sort(strs.begin(), strs.end());
    for(int i=0; i<strs.size(); i++)
    {
        cout<<strs[i];
    }
    return 0;
}