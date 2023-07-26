<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

class Student {
   public: char name[100];
   int roll;
   int cls;
   char section;
};
int main() {
   Student saikot;
   saikot.roll = 10;
   saikot.cls = 9;
   saikot.section = 'A';
   char nm[100] = "Md.Zobaer Islam";
   strcpy(saikot.name, nm);

   Student limu;
   limu.roll = 10;
   limu.cls = 9;
   limu.section = 'B';
   char mn[100] = "Falguni Ahmed";
   strcpy(limu.name, mn);

   cout << limu.name;

   return 0;
=======
#include <bits/stdc++.h>

using namespace std;

class Student {
   public: char name[100];
   int roll;
   int cls;
   char section;
};
int main() {
   Student saikot;
   saikot.roll = 10;
   saikot.cls = 9;
   saikot.section = 'A';
   char nm[100] = "Md.Zobaer Islam";
   strcpy(saikot.name, nm);

   Student limu;
   limu.roll = 10;
   limu.cls = 9;
   limu.section = 'B';
   char mn[100] = "Falguni Ahmed";
   strcpy(limu.name, mn);

   cout << limu.name;

   return 0;
>>>>>>> 3d585946ad7ebf978c6ab4b6bdd13b54a7b3b38c
}