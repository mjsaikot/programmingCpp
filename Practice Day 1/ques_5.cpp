/*Question: Take an integer array A of size N as input. Then take an integer M as 
input. You need to take an array B of size M and copy all elements of array A to array
 B. Delete the array A and then take input of the rest of the elements of array B. 
 After that print array B.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
   int n, m;
   cin >> n;
   int * a = new int[n];
   for (int i = 0; i < n; i++) {
      cin >> a[i];
   }
   cin >> m;
   int * b = new int[m];
   for (int i = 0; i < m; i++) {
      i < n ? b[i] = a[i] : b[i] = 0;
   }
   delete[] a;

   for (int i = n; i < m; i++) {
      cin >> b[i];
   }
   for (int i = 0; i < m; i++) {
      cout << b[i] << " ";
   }

   return 0;
}