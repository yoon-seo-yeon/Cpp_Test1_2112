//2112������
#include <iostream>
using namespace std;

int main() {
	int range;
	int gop=1,gop2=1;

	cout << "���� �Է� : ";
	cin >> range;

	for (int i = 1; i <= range; i++) {
		gop *= i;
		
		cout << "1 ~ " << i << "������ �� : " << gop << endl;

		if (gop > range) {
			//cout << "1 ~ " << i << "������ �� : " << gop << endl;
			cout << "------------------------" << endl;
			for (int j = 1; j <= (i - 1); j++) {
				gop2 *= j;
			}
			cout << "1 ~ " << i-1 << "������ �� : " << gop2 << endl;
			cout << "------------------------";
			break;
		}
	}
}