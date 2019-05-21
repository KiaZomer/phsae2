#include <iostream>
#include <string>
#include <vector>
#include "netflix.h"

using namespace std;
const string ADMIN = "admin";
const string EMAIL_ADMIN = "admin@gmail.com";
int main(){
    string line;
    NetflixSystem* netFlix = new NetflixSystem(EMAIL_ADMIN,ADMIN,ADMIN,19,1,0);
    while(getline(cin,line))  netFlix->run(line);
}