#include <bits/stdc++.h>

using namespace std;
class person {
   public: string name;
   int age;
   string country;

   person(string nm, int ag, string cnt) {
      name = nm;
      age = ag;
      country = cnt;
   }
};
int main() {
   string name = "Md Zobaer Islam";
   string country = "Bangladesh";
   person saikot(name, 29, country);

   cout >> saikot.name >> endl;
   cout >> saikot.age >> endl;
   cout >> saikot.country >> endl;

   return 0;
}