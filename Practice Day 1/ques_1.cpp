// Given a letter X. Determine whether X is Digit or Alphabet and if 
// it is Alphabet determine if it is Capital Case or Small Case.

#include <iostream>
using namespace std;
 
int main() {
    char x;
    cin>>x;
    if(isdigit(x))
    {
        cout<<"IS DIGIT"<<endl;
    }
    else if(isalpha(x))
    {
        if(isupper(x))
        {
            cout<<"ALPHA"<<endl<<"IS CAPITAL";
        }
        else {
            cout<<"ALPHA"<<endl<<"IS SMALL";
        }
    }
    
    return 0;
}