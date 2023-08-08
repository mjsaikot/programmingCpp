#include <bits/stdc++.h>
/*You will be given two strings S and X. You need to replace all X from string S with a '$' sign.*/
using namespace std;

int main() {
   int n;
   cin >> n;
   string s, x;
   for (int i = 0; i < n; i++) {
      cin >> s >> x;
      while (s.find(x) != -1) {

         s.replace(s.find(x), x.size(), "$");

      }
      cout << s << endl;
   }

   return 0;
}