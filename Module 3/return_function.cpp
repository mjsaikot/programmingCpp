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
}