<<<<<<< HEAD
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
=======
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
>>>>>>> 3d585946ad7ebf978c6ab4b6bdd13b54a7b3b38c
}