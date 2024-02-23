//Marie Klinzing, Erin Foege
#include <iostream>
#include <cstdlib>
#include "StringData.h"  //"" because it's a file

using namespace std;

int BinarySearch(string container[], string element, int index){
    int left = 0;
    int right = index - 1;

    while(left <= right){
        int middle = left + (right - left) / 2;  //half the list at element
        int comparison = data[mid].compare(key);
        if (comparison == 0)
        {
            return mid;
        }
        else if (comparison < 0)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // not found
    }


}

int LinearSearch(int number[], int numberSize){

}

int main() {
    int numbers[] = { 2, 4, 7, 10, 11, 32, 45, 87 };
    const int NUMBERS_SIZE = 8;
    int i;
    int key;
    int keyIndex;

    cout << "NUMBERS: ";
    for (i = 0; i < NUMBERS_SIZE; ++i) {
        cout << numbers[i] << ' ';
    }
    cout << endl;

    cout << "Enter a value: ";
    cin >> key;

    keyIndex = BinarySearch(numbers, NUMBERS_SIZE, key);

    if (keyIndex == -1) {
        cout << key << " was not found." << endl;
    }
    else {
        cout << "Found " << key << " at index " << keyIndex << "." << endl;
    }

    return 0;
}
