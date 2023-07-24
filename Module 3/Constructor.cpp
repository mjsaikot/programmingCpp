#include <bits/stdc++.h>

using namespace std;

class Student {
   public: char name[100];
   int roll;
   int cls;
   char section;

   Student(int r, int c, char s, char * n) {
      roll = r;
      cls = c;
      section = s;
      strcpy(name, n);
   }
};
int main() {
   Student saikot(10, 9, 'A', "Zobaer Islam Saikot");

   cout << saikot.roll;

   return 0;
}