//2112윤서연
#include <iostream>
using namespace std;

int main() {
	int cnt = 0;

	for (int i = 1; i <= 150; i++) {
		if (i % 12 == 0) {
			cout << i << "\t";
			cnt++;
			if (cnt % 12 == 0) {
				cout << endl;
			}
		}
	}
	cout <<endl<< "개수 = " << cnt << "개";
}