#include <bits/stdc++.h>

using namespace std;

class student {
   public: string name;
   int roll;
   int marks;
};
int main() {
   // int n;
   // cin>>n;
   student a[2];
   for (int i = 0; i < 2; i++) {
      getline(cin, a[i].name);
      cin >> a[i].roll >> a[i].marks;
      cin.ignore();
   }
   for (int i = 0; i < 2; i++) {
      cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
   }

   return 0;
}