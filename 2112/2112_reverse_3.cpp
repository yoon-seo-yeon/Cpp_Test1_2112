//2112������
#include <iostream>
using namespace std;

int main() {
	int num;

	cout << "�� �Է� : ";
	cin >> num;

	cout << "��� : ";
	while (num) {
		cout << num % 10;
		num = num / 10;
	}
}