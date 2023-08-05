#include <bits/stdc++.h>

using namespace std;

int main() {
   string s;
   getline(cin,s);
   stringstream ss(s);
   string word;
   int cnt = 0;
//   string found = "Ratul";
   while(ss >> word)
   {
    if(word.find("Ratul"))
    {
        cnt++;
    }
    
   cout<<word.find("Ratul")<<endl;
   }
//   if(flag == 1)
//   {
//       cout<<"YES";
    
//   }
//   else {
//       cout<<"NO";
//   }
   
   return 0;
}