#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Size of the array: ";
    cin >> size;

    int *array = new int[size];

    cout << "Enter array elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    
    const int num_digits = 10;
    int frequency[num_digits] = {0};

    
    for (int i = 0; i < size; ++i) {
        int digit = array[i];
        ++frequency[digit];
    }

    
    cout << "Frequency:" <<endl;
    for (int i = 0; i < num_digits; ++i) {
        if (frequency[i] > 0) {
            cout << i << " => " << frequency[i] <<endl;
        }
    }

    
    return 0;
}

