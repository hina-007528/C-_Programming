#include<iostream>

using namespace std; 
struct employee
{int eID;
char favchar;
float salary;
};
int main(){struct employee harry;
harry.eID=1;
harry.favchar='c';
harry.salary=120000000;
cout<<harry.eID<<endl;
cout<<harry.favchar<<endl;
cout<<harry.salary<<endl;
    return 0;}