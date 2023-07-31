/* Write a minimum and maximum without built in function. If here we ant to use 
built in function the we should use #include <algorithm> header file for use min 
and max */ 
#include <iostream>

using namespace std;
int my_min(int a, int b) {
  if (a < b) return a;
  else return b;
}
int my_max(int a, int b) {
  if (a > b) return a;
  else return b;
}
int main() {
  int a, b;
  cin >> a >> b;
  int mn = my_min(a, b);
  int mx = my_max(a, b);
  cout << mn << " " << mx << endl;

  return 0;
}