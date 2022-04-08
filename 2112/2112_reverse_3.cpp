//2112윤서연
#include <iostream>
using namespace std;

int main() {
	int num;

	cout << "수 입력 : ";
	cin >> num;

	cout << "결과 : ";
	while (num) {
		cout << num % 10;
		num = num / 10;
	}
}