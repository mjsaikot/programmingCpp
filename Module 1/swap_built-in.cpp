<<<<<<< HEAD
#include <iostream>
#include <utility>
//here #include <utility> use for built in function swap;
using namespace std;
void my_swap(int *a,int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int a,b;
    cin>>a>>b;
    my_swap(&a,&b);
    cout<<a<<" "<<b<<endl;

    return 0;
=======
#include <iostream>
#include <utility>
//here #include <utility> use for built in function swap;
using namespace std;
void my_swap(int *a,int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int a,b;
    cin>>a>>b;
    my_swap(&a,&b);
    cout<<a<<" "<<b<<endl;

    return 0;
>>>>>>> 3d585946ad7ebf978c6ab4b6bdd13b54a7b3b38c
}