#include <bits/stdc++.h>
/*Given a string S
. For each word in S
 reverse its letters then print it.*/
using namespace std;
string revword(string word)
{
   string rev = word;
   reverse(rev.begin(),rev.end());
   return rev;
}

int main() {
   string s;
   getline(cin,s);
   stringstream ss(s);
   string word;
   bool firstWord = true;
   while(ss >> word)
   {
      if(!firstWord)
      {
         cout<<" ";
      }
      cout<<revword(word);
      firstWord = false;
   }
   cout<<endl;

   return 0;
}