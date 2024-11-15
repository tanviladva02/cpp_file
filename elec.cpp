#include <iostream>
using namespace std;

int main() {
    int U;
    
    cin >> U;

    int bill = 0;
    if (U <= 100)
	{
        bill = U * 10 + 50; 
    }
	else if (U <= 200) 
	{
        bill = 1000 + (U - 100) * 15 + 75; 
    } 
	else if (U <= 300) 
	{
        bill = 1000 + 100 * 15 + (U - 200) * 20 + 100; 
    } 
	else 
	{
        bill = 1000 + 100 * 15 + 100 * 20 + (U - 300) * 25 + 125; 
    }

    cout << bill << endl;

    return 0;
}

