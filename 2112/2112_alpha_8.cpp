//2112������
#include <iostream>
using namespace std;

int main() {
	char alpha[50];
	

	while (true) {
		int sum = 0;
		cout << "���� �ܾ��� ���� ����ϴ� ���α׷��Դϴ�.('0'�� �Է��ϸ� ���α׷��� �����մϴ�.)" << endl;
		cout << "���ϴ� �ܾ �Է��ϼ���. ";
		cin >> alpha;

		if (alpha[0] == '0') {
			break;
		}									 
		else {
			for (int i = 0; i < alpha[i] != NULL; i++) {
				if (isupper(alpha[i])) 
					sum += (int)(alpha[i] - 'A' + 1);
				else 
					sum+= (int)(alpha[i] - 'a' + 1);
			}
		}
		cout << alpha << " ==> " << sum << endl;
		cout << endl;
	 }
}