#include <bits/stdc++.h>
using namespace std;
/*Given 2 numbers N
 and Q, array A of N numbers and Q queries each one contains a number X.For each query print a single line that contains
  "found" if the number X exists in array A otherwise, print "not found".*/
int main() {
    int n,q; cin>>n>>q;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    while(q--)
    {
        int x; cin>>x;
        bool flag = false;
        for(int i=0; i<n; i++)
        {
            if(a[i] == x)
            {
                flag = true; 
                break;
            }
        }
        if(flag == true) cout<<"Found"<<endl;
        else cout<<"Not Found"<<endl;
    }
    return 0;
}