//2112À±¼­¿¬
#include <iostream>
using namespace std;

int main() {
	int range;
	int gop=1,gop2=1;

	cout << "¹üÀ§ ÀÔ·Â : ";
	cin >> range;

	for (int i = 1; i <= range; i++) {
		gop *= i;
		
		cout << "1 ~ " << i << "±îÁöÀÇ °ö : " << gop << endl;

		if (gop > range) {
			//cout << "1 ~ " << i << "±îÁöÀÇ °ö : " << gop << endl;
			cout << "------------------------" << endl;
			for (int j = 1; j <= (i - 1); j++) {
				gop2 *= j;
			}
			cout << "1 ~ " << i-1 << "±îÁöÀÇ °ö : " << gop2 << endl;
			cout << "------------------------";
			break;
		}
	}
}