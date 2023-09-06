#include <iostream>

using namespace std;

int main() {
    const char* numbers[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "'rovic'"}; //I used 'rovic' string in my python so that I also used it in my C++
    
    cout << "[";

    for (int i = 0; i < 11; i++) {
        cout << numbers[i];
        if (i < 10) {
            cout << ", ";
        }
    }

    cout << "]" << endl;

    return 0;
}
