#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, size, arr[100];
    int i,j;
    cout<<"Enter\n";
    cin>>n>>size;

    for(i = 0;i<=n;i++)
    {
        for(j=0;j<size;j++)
        {
            cin>>arr[j];
        }
        cout<<arr[j];
    }
    return 0;
}