#include <iostream>
using namespace std;
int main() {
    
    int num;
    cin>>num;

    if(num<0)
    ? cout<<"Enter 0 or greater number"
    : if(num%2==0)
    ? cout<<"This number is Even"
    : cout<<"This number is odd"<<endl;
    return 0;
}

