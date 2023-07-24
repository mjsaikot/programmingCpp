/*Given a comparison symbol S between two numbers A and B. Determine whether it is 
Right or Wrong.

The comparison is as follows: A < B, A > B, A = B.

Where A, B are two integer numbers and S refers to the sign between them.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    char s;
    cin>>a>>s>>b;
    bool isRight = false;
    switch(s)
    {
        case '<':
        isRight = (a < b);
        break;
        
        case '>':
        isRight = (a > b);
        break;
        
        case '=':
        isRight = (a == b);
        break;
        
        
        default:
        cout<<"Invalid comparison symbol!"<<endl;
        
    }
    
    if(isRight)
    {
        cout<<"Right"<<endl;
    }
    else{
        cout<<"Wrong"<<endl;
    }

    return 0;
}