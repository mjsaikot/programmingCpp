#include <bits/stdc++.h>
 //using sort funtion for sort object by marks;;
using namespace std;

class student {
   public: string name;
   int roll;
   int marks;
};

//custom function for compare;
bool cmp(student a, student b) {
   if (a.marks < b.marks) return true;
   else return false;
}

int main() {
   student a[3];
   //input here
   for (int i = 0; i < 3; i++) {
      getline(cin, a[i].name);
      cin >> a[i].roll >> a[i].marks;
      getchar();
   }
   sort(a, a + 3, cmp);
   //output here;
   for (int i = 0; i < 3; i++) {
      cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
   }

   return 0;
}