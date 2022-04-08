#include <iostream>
using namespace std;

void num_merge(int num[],int n) {
	int i, j,temp = 0;
	for (i = 0; i < n-1; i++) {
		for (j = 0; j < (n - 1 - i); j++) {
			if (num[j] > num[j + 1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
}

int main() {
	int A[5],B[5],C[10];

	cout << "ù��° ���� ����Ÿ 5�� �Է� : ";
	for (int i = 0; i < 5; i++)
		cin >> A[i];

	cout << "�ι�° ���� ����Ÿ 5�� �Է� : ";
	for (int i = 0; i < 5; i++) 
		cin >> B[i];

	cout << "************************" << endl;

	cout << "ù��° ����Ÿ ���� ��� : ";
	num_merge(A, 5);
	for (int i = 0; i < 5; i++) 
		cout << A[i] << "\t";

	cout <<endl<< "�ι�° ����Ÿ ���� ��� : ";
	num_merge(B, 5);
	for (int i = 0; i < 5; i++) 
		cout << B[i] << "\t";

	for (int i = 0; i < 10; i++) {
		if (i < 5) C[i] = A[i];
		else C[i] = B[i - 5];
	}

	cout << endl <<"���� ����Ÿ ���� ��� : ";
	num_merge(C, 10);
	for (int i = 0; i < 10; i++) {
		if (C[i-1] == C[i]) 
			continue;
		cout << C[i] << "\t";
	}
}