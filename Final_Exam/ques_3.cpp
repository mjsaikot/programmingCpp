#include <bits/stdc++.h>
/*You will be given data for N students, where each student will have a name (nm),
 class (cls), section (s), math marks (math_marks), and English marks (**eng_mark**s).
Your task is to print the data of the students in reverse order.*/
using namespace std;
class student
{
    public:
    string name;
    int cls;
    char sec;
    int mm;
    int em;
};

int main() {
    int n;
    cin>>n;
    student a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].cls>>a[i].sec>>a[i].mm>>a[i].em;
    }
    reverse(a,a+n);
    for(int i=0; i<n; i++)
    {
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].mm<<" "<<a[i].em<<endl;;
    }
   
   return 0;
}