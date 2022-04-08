//2112윤서연
#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand((unsigned)time(0));
	int com_num[7];
	int temp=0;

	cout << "정렬 전 : ";
	for (int i = 0; i < 7; i++) {
		com_num[i] = rand() % 46 + 1;
		for (int j = 0; j < i; j++) {
			if (com_num[i] == com_num[j]) 
				i--;
		}
	}

	for (int i = 0; i < 7; i++) 
		cout << com_num[i] << "\t";

	cout << endl<< "정렬 후 : ";

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6-i; j++) {
			if (com_num[j] > com_num[j + 1]) {
				temp = com_num[j];
				com_num[j] = com_num[j + 1];
				com_num[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 7; i++) 
		cout << com_num[i] << "\t";
}