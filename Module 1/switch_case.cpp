/* Write a even odd program using switch case*/ 
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  cin >> a;
  switch (a % 2) {
  case 0:
    cout << "Even" << endl;
    break;
  case 1:
    cout << "odd" << endl;
    break;
  default:
    cout<<"Alphabet"<<endl;
  }
  return 0;
}