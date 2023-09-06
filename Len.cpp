#include <iostream>
using namespace std;

int main() {
	int num[] = {5, 4, 3, 2, 1};
	int y = sizeof(num) / sizeof(num[0]);
	
	cout << y << endl;

	return 0;
}
