<<<<<<< HEAD
/*Create a class named Person where the class will have properties name(string), 
height(float) and age(int). Make a constructor and create a dynamic 
object of that class and finally pass proper values using the constructor. */

#include <bits/stdc++.h>
using namespace std;

class person
{
    public:
    char name[100];
    float height;
    int age;
    
    person(char *nm, float h, int a)
    {
        strcpy(name,nm);
        height = h;
        age = a;
    }
};

int main() {
    // char name1 = "Md. Zobaer Islam"
    char name[100] = "Md. Zobaer Islam";
    person *saikot = new person(name, 5.7, 29);
    
    char name1[100] = "Md. Rafat Ahmed";
    person *rafat = new person(name1,5.4, 27);
    
    cout<<rafat->name<<endl;
    cout<<rafat->height<<endl;
    cout<<rafat->age<<endl;
    
    cout<<saikot->name<<endl;
    cout<<saikot->height<<endl;
    cout<<saikot->age<<endl;

    return 0;
=======
/*Create a class named Person where the class will have properties name(string), 
height(float) and age(int). Make a constructor and create a dynamic 
object of that class and finally pass proper values using the constructor. */

#include <bits/stdc++.h>
using namespace std;

class person
{
    public:
    char name[100];
    float height;
    int age;
    
    person(char *nm, float h, int a)
    {
        strcpy(name,nm);
        height = h;
        age = a;
    }
};

int main() {
    // char name1 = "Md. Zobaer Islam"
    char name[100] = "Md. Zobaer Islam";
    person *saikot = new person(name, 5.7, 29);
    
    char name1[100] = "Md. Rafat Ahmed";
    person *rafat = new person(name1,5.4, 27);
    
    cout<<rafat->name<<endl;
    cout<<rafat->height<<endl;
    cout<<rafat->age<<endl;
    
    cout<<saikot->name<<endl;
    cout<<saikot->height<<endl;
    cout<<saikot->age<<endl;

    return 0;
>>>>>>> 3d585946ad7ebf978c6ab4b6bdd13b54a7b3b38c
}