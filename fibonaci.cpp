#include <iostream>
using namespace std;
int main() 
{
    int N,a=0,b=1,next;
    cin>>N;
    cout<<a<<" ";

    for(int i=2;i<=N;i++)
    {
        next=a+b;
        cout<<next<<" ";
        a = b;
        b = next;
    }

    return 0;
}

