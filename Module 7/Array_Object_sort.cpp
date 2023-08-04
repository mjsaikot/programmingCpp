#include <bits/stdc++.h>

using namespace std;

class student {
   public: string name;
   int roll;
   int marks;
};
int main() {
   //Array Object sorting by selection sort;; 
   student a[2];
   for (int i = 0; i < 2; i++) {
      getline(cin, a[i].name);
      cin >> a[i].roll >> a[i].marks;
      getchar();
   }

   for (int i = 0; i < 1; i++) {
      for (int j = i + 1; j < 2; j++) {
         if (a[i].marks > a[j].marks) {
            swap(a[i], a[j]);
         }
      }
   }
   for (int i = 0; i < 2; i++) {
      cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
   }

   return 0;
}