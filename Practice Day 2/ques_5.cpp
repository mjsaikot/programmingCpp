/*Create three static objects with the help of the constructor of the 
following class.
Student
{
	name;
	roll;
	section;
	math_marks;
	cls;
}
Then compare those 3 objects and print who got the highest math_marks and 
print his/her name.
*/
#include <bits/stdc++.h>
using namespace std;
class student {
    public:
    char name[100]; 
    int roll;
    char section;
    int math_marks;
    int cls;
    
    student(char *n,int r, char s, int m, int c)
    {
        strcpy(name,n);
        roll = r;
        section = s;
        math_marks = m;
        cls = c;
    }
};
int main() {
    student rahim("Rahim Khan", 10, 'A', 84, 9);
    student karim("karim Khan", 12, 'B', 91, 9);
    student saikot("Saikot Khan", 17, 'B', 90, 9);
    
    if(saikot.math_marks > rahim.math_marks && saikot.math_marks > karim.math_marks)
    {
        cout<<saikot.name<<" "<<"="<<" "<<saikot.math_marks;
    }
    else if(rahim.math_marks > karim.math_marks && rahim.math_marks > saikot.math_marks)
    {
        cout<<rahim.name<<" "<<"="<<" "<<rahim.math_marks;
    }
    else{
        cout<<karim.name<<" "<<"="<<" "<<karim.math_marks;
    }
    
     
    return 0;
}