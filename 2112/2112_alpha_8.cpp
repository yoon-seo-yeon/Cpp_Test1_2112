//2112윤서연
#include <iostream>
using namespace std;

int main() {
	char alpha[50];
	

	while (true) {
		int sum = 0;
		cout << "영어 단어의 값을 계산하는 프로그램입니다.('0'을 입력하면 프로그램을 종료합니다.)" << endl;
		cout << "원하는 단어를 입력하세요. ";
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