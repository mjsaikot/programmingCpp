/*Question: Create a dynamic object named dhoni of the following class. Don’t use a constructor here, that means you need to fill the data by yourself.
Cricketer
{
	jersey_no;
	country;
}
Then make another dynamic object named kohli and copy the data of the dhoni object to kohli and after that delete the dhoni object. Then print the jersey_no and country of kohli object.
*/

#include <bits/stdc++.h>
using namespace std;

class crick{
    public:
    int jersey;
    char country[100];
};
int main() {
    crick *dhoni = new crick;
    dhoni->jersey = 35;
    char *cnt = "India";
    strcpy(dhoni->country,cnt);
    
    
    crick *kohli = new crick;
    kohli->jersey = 16;
    char *cn = "India";
    strcpy(kohli->country,cn);
    
    // kohli = dhoni;
    kohli->jersey = dhoni->jersey;
    delete dhoni;
    
    cout<<kohli->jersey;

    return 0;
}