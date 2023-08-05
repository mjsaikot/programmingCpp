#include <bits/stdc++.h>
/*Your task is reverse their id and print all the students data. 
That means the id of the first student will be replaced by the id of the last student, 
the id of the second student will be replaced by the id of the second last student and so on. 
See the sample input and output for more clarifications.*/
using namespace std;
class student {
   public: string name;
   int cls;
   char sec;
   int id;
};

int main() {
   int n;
   cin >> n;
   student a[n];
   for (int i = 0; i < n; i++) {
      cin >> a[i].name >> a[i].cls >> a[i].sec >> a[i].id;
   }
   for (int i = 0; i < n / 2; i++) {
      swap(a[i].id, a[n - 1 - i].id);
   }
   for (int i = 0; i < n; i++) {
      cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << endl;;
   }

   return 0;
}