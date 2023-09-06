#include <iostream>
using namespace std;

int main() {
    int num[] = {5, 4, 3, 2, 1};
    int n[] = {5, 4, 3, 2, 1};
    int size = sizeof(num) / sizeof(num[0]);

    for (int i = 0; i < size / 2; i++) {
        int temp = n[i];
        n[i] = n[size - i - 1];
        n[size - i - 1] = temp;
    }

    for (int i = 0; i < size; i++) {
        cout << n[i] << ' ';
    }
    cout << endl;
    return 0;
}
