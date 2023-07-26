<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

class player
{
    public:
    char name[100];
    int jersey;
    
    player(char *n, int j)
    {
        strcpy(name,n);
        jersey = j;
    }
};

player play()
{
    char name[100] = "Sakib al Hasan";
    player sakib (name,75);
    return sakib;
}

int main() {
    player sakib = play();
    
    cout<<sakib.name<<endl;
    cout<<sakib.jersey<<endl;

    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

class player
{
    public:
    char name[100];
    int jersey;
    
    player(char *n, int j)
    {
        strcpy(name,n);
        jersey = j;
    }
};

player play()
{
    char name[100] = "Sakib al Hasan";
    player sakib (name,75);
    return sakib;
}

int main() {
    player sakib = play();
    
    cout<<sakib.name<<endl;
    cout<<sakib.jersey<<endl;

    return 0;
>>>>>>> 3d585946ad7ebf978c6ab4b6bdd13b54a7b3b38c
}