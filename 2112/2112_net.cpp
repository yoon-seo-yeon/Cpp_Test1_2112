#include <iostream>
using namespace std;

int main() {
	int gross, net, tax;

	cout << "������ �Է�(���� ������ �Է�) : ";
	cin >> gross;

	switch (gross / 1000) {
		case 0: tax = 0; break;
		case 1: case 2: tax = (gross - 1000) * 0.01; break;
		case 3: case 4: tax = 20 + (gross - 3000) * 0.03; break;
		case 5: tax = 80 + (gross - 5000) * 0.06; break;
	}

	cout << "���� : " << tax << "����" << endl;

	net = gross - tax;
	cout << "�����ҵ� : " << net << "����";

}