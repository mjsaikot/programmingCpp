/*Find the smallest pair
input:
1
4
20 1 9 4
Output : 7*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    cin>>n;
    int small = INT_MAX;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int res = a[i]+a[j]+j-i;
            small=min(small,res);
        }
    }
    cout<<small;
    
    return 0;
}