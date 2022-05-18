#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    vector<ll> result;
    for (int i = 0; i < n; i++)
    {
        result.push_back(arr[i] * (n - i));
    }
    sort(result.begin(), result.end());
    int l = result.size();
    cout<<result[l-1]<<endl;

    return 0;
}