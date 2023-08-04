#include <bits/stdc++.h>

using namespace std;

class student {
   public: string name;
   int roll;
   int marks;
};
int main() {
   //Print the minimum and maximum marks of student;; 
   student a[2];
   for (int i = 0; i < 2; i++) {
      getline(cin, a[i].name);
      cin >> a[i].roll >> a[i].marks;
      cin.ignore();
   }
   student mx;
   mx.marks = INT_MIN;
   for (int i = 0; i < 2; i++) {
      if (a[i].marks > mx.marks) {
         mx = a[i];
      }
   }
   cout << mx.name << " " << mx.roll << " " << mx.marks << endl;
   student mn;
   mn.marks = INT_MAX;
   for (int i = 0; i < 2; i++) {
      if (a[i].marks < mn.marks) {
         mn = a[i];
      }
   }
   cout << mn.name << " " << mn.roll << " " << mn.marks << endl;

   return 0;
}