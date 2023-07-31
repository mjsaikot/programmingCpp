#include <bits/stdc++.h>

using namespace std;

class Student {
   public: 
   char name[100];
   int roll;
   int cls;
   char section;

   Student(int r, int c, char s, char * n) {
      roll = r;
      cls = c;
      section = s;
      strcpy(name,n);
   }
};
int main() {
    char name[100] = "Zobaer Islam Saikot";
   Student* saikot = new Student(10, 9, 'A', name);

   cout << saikot->roll;
   cout << (*saikot).name;

   return 0;
}