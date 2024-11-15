#include <iostream>
using namespace std;
int main() {
    int N;
    cin>>N;

     for (int i = N; i >= 1; i--) 
	 {
        for (int j = i; j >= 1; j--) 
		{
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

