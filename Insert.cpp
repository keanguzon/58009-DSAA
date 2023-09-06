#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    for (int i = 1; i <= 10; i++) numbers.push_back(i);
    numbers.insert(numbers.begin() + 1, 69); //In my python code I inserted a name instead of an integer, in this case I used integer too not name/string.

    for (size_t i = 0; i < numbers.size(); i++) cout << " " << numbers[i];
    cout << endl;

    return 0;
}
