#include <iostream>

using namespace std;

int main() {

	int number;	int even = 0; int odd = 0;
	cin >> number;

	for (int i = number; number >=0; number--){
		if (even == 10) {
			break;
		}
		else {
			if (number % 2) {
				if (number == 5) {
					continue;
				}
				odd++;
			}
			else {
				if (number == 8) {
					continue;
				}
				even++;
			}
		}
	}

	cout << "the number of odd is " << odd << endl;
	cout << "the number of even is " << even << endl;

	return 0;
}