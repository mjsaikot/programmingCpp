#include <bits/stdc++.h>
 //using sort funtion for sort object by marks;;
 /*Your task is to sort the Students data according to the marks in descending order.
 If multiple students have the same marks then sort them according to the roll in ascending order 
 as the roll will be unique.
*/
using namespace std;

class student {
   public: string name;
   int roll;
   int marks;
};

//custom function for compare;
bool cmp(student a, student b) {
   if (a.marks < b.marks) return true;
   else if(a.marks == b.marks)
   {
      if(a.roll < b.roll) return true;
      else return false;
   }
   else return false;
}

int main() {
   //main function code here;;
   int n;
   cin>>n;
   getchar();
   student a[n];
   //input here
   for (int i = 0; i < n; i++) {
      getline(cin, a[i].name);
      cin >> a[i].roll >> a[i].marks;
      getchar();
   }
   sort(a, a + n, cmp);
   //output here;
   for (int i = 0; i < n; i++) {
      cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
   }

   return 0;
}