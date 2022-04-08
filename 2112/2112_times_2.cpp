//2112윤서연
#include <iostream>
using namespace std;

int main() {
	int num1, num2;

	cout << "정수1 입력 : ";
	cin >> num1;//6

	cout << "정수2 입력 : ";
	cin >> num2;//4
	cout << endl;

	if (num1 > num2) {
		for (int i = num2; i <= num1; i++) {
			cout << i << "단" << endl;
			for (int j = 1; j <= 9; j++) {
				cout << i << " * " << j << " = " << (i * j) << endl;
			}
			cout << endl;
		}
	}
	else {
		for (int i = num1; i <= num2; i++) {

			cout << i << "단" << endl;
			for (int j = 1; j <= 9; j++) {
				cout << i << " * " << j << " = " << (i * j) << endl;
			}
			cout << endl;
		}
	}

}