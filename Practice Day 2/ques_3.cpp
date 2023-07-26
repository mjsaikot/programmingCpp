<<<<<<< HEAD
/*Sorting string using sort built-in functions */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    sort(s,s+n);
    for(int i=0;i<n;i++)
    {
        cout<<s[i];
    }
    
    return 0;
=======
/*Sorting string using sort built-in functions */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    sort(s,s+n);
    for(int i=0;i<n;i++)
    {
        cout<<s[i];
    }
    
    return 0;
>>>>>>> 3d585946ad7ebf978c6ab4b6bdd13b54a7b3b38c
}