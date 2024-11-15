#include <iostream>
using namespace std;
int main() {
    int n,a[10],p,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>p;
    cout<<"First array:";
    for(i=0;i<p;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<"second array:";
    for(i=p;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

