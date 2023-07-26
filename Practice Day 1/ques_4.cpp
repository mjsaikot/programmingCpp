<<<<<<< HEAD
/* At first in the main function take an integer N as input. 
Then make a function named get_array() which will receive that N as a parameter. 
Then inside the get_array() function create an integer array of size N. 
Then the values of that array will be taken as input. 
After that return that array from that function and receive it in the main 
function and print the values of the array there.
*/
#include <bits/stdc++.h>

using namespace std;
int * get_array(int n) {
   int * a = new int[n];
   for (int i = 0; i < n; i++) {
      cin >> a[i];
   }
   return a;
}

int main() {
   int n;
   int * a = new int[n];
   cin >> n;
   int * fun = get_array(n);
   for (int i = 0; i < n; i++) {
      cout << fun[i] << " ";
   }
   return 0;
=======
/* At first in the main function take an integer N as input. 
Then make a function named get_array() which will receive that N as a parameter. 
Then inside the get_array() function create an integer array of size N. 
Then the values of that array will be taken as input. 
After that return that array from that function and receive it in the main 
function and print the values of the array there.
*/
#include <bits/stdc++.h>

using namespace std;
int * get_array(int n) {
   int * a = new int[n];
   for (int i = 0; i < n; i++) {
      cin >> a[i];
   }
   return a;
}

int main() {
   int n;
   int * a = new int[n];
   cin >> n;
   int * fun = get_array(n);
   for (int i = 0; i < n; i++) {
      cout << fun[i] << " ";
   }
   return 0;
>>>>>>> 3d585946ad7ebf978c6ab4b6bdd13b54a7b3b38c
}