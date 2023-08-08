#include <bits/stdc++.h>
/*Write a program to determine if a given string contains the word "Ratul." 
If the word is present in the string, 
the program should output "YES," otherwise it should output "NO."*/
using namespace std;

int main() {
   string s;
   getline(cin, s);
   stringstream ss(s);
   bool found = false;
   string word;
   while (ss >> word) {
      if (word == "Ratul") {
         found = true;
         break;
      }
   }
   if (found == true) {
      cout << "YES" << endl;
   } else {
      cout << "NO" << endl;
   }
   return 0;
}