#include <bits/stdc++.h>
//replace EGYPT to space;;
using namespace std;

int main() {
   string s;
   cin >> s;
   while (s.find("EGYPT") != -1) {
      s.replace(s.find("EGYPT"), 5, " ");
   }
   cout << s << endl;

   return 0;
}