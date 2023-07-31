    #include <bits/stdc++.h>

    using namespace std;
    //stirng all important built-in function here;; 
    int main() {
       string a, b;
       cin >> a >> b;
       a = a + b;
       //a.append(b); same like a+=b;
       //a.resize(8); resize the string length;
       cout << a << endl;
       cout << a.front() << endl;
       cout << a.back() << endl;
       cout << a.size() << endl;
       cout << a.capacity() << endl;
       b.clear();
       if (b.empty() == true) {
          cout << "B is empty now" << endl;
       } else {
          cout << b << endl;
       }
       a.erase(3, 1);
       cout << a << endl;
       a.replace(4, 2, "sa");
       cout << a << endl;
       a.insert(3, "My");
       cout << a << endl;
       return 0;
    }