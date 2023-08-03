#include <bits/stdc++.h>

using namespace std;

int main() {
   string s;
   getline(cin, s);
   while (s.find("world") != -1) {
      s.replace(s.find("world"), 5, "saikot");

   }
   cout << s << endl;

   return 0;
}