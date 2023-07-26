<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;
    int sum = a+b;
    int sub = a-b;
    int mul = a*b;
    if(s == '+'){
        if(a+b != c)
        {
            cout<<sum<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    if(s == '-'){
        if(a-b != c)
        {
            cout<<sub<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    if(s == '*'){
        if(a*b != c)
        {
            cout<<mul<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    
    

    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;
    int sum = a+b;
    int sub = a-b;
    int mul = a*b;
    if(s == '+'){
        if(a+b != c)
        {
            cout<<sum<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    if(s == '-'){
        if(a-b != c)
        {
            cout<<sub<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    if(s == '*'){
        if(a*b != c)
        {
            cout<<mul<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    
    

    return 0;
>>>>>>> 3d585946ad7ebf978c6ab4b6bdd13b54a7b3b38c
}