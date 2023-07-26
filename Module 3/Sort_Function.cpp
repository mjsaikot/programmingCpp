<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;
//greater<int>() use for descending order;;
int main() {
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
        cin>>a[i];
   }
   sort(a,a+n,greater<int>());

   for(int i=0;i<n;i++)
   {
        cout<<a[i]<<" ";
   }
   return 0;
=======
#include <bits/stdc++.h>

using namespace std;
//greater<int>() use for descending order;;
int main() {
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
        cin>>a[i];
   }
   sort(a,a+n,greater<int>());

   for(int i=0;i<n;i++)
   {
        cout<<a[i]<<" ";
   }
   return 0;
>>>>>>> 3d585946ad7ebf978c6ab4b6bdd13b54a7b3b38c
}