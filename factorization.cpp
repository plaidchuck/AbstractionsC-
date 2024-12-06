#include <iostream>

using namespace std;

int main() {
	int input;
	bool end = false;
	cin >> input;

	while (input % 2 == 0) {
		if (input / 2 == 1) {
			end = true;
		}
		if (end) {
			cout << "2" << endl;
		}
		else {
			cout << "2 x ";
		}
		
		input /= 2;
	}

	for (int i = 3; i <= input; ++i) {
		if (input % i == 0) {
			if (input / i == 1) {
				cout << i << endl;
				break;
			}
			else {
				cout << i << " x ";
				input /= i;
				i = 2;
			}
		}
	}
}
