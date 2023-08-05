#include <bits/stdc++.h>
/*Your task is to sort the students data according to the total marks (sum of math_marks and eng_marks) in descending order. 
If multiple student have the same total marks then sort them according to the id in ascending order as the id will be unique.*/
using namespace std;

class student {
   public: string name;
   int cls;
   char sec;
   int id;
   int mm;
   int em;
};

//custom function for compare;
bool cmp(student a, student b) {
   int marks1 = a.mm + a.em;
   int marks2 = b.mm + b.em;
   if (marks1 > marks2) return true;
   else if (marks1 == marks2) {
      if (a.id < b.id) return true;
      else return false;
   } else return false;
}

int main() {
   //main function code here;;
   int n;
   cin >> n;
   student a[n];
   for (int i = 0; i < n; i++) {
      cin >> a[i].name >> a[i].cls >> a[i].sec >> a[i].id >> a[i].mm >> a[i].em;
   }
   sort(a, a + n, cmp);
   //output here;
   for (int i = 0; i < n; i++) {
      cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << " " << a[i].mm << " " << a[i].em << endl;
   }

   return 0;
}