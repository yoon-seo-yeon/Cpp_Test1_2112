#include <iostream>
using namespace std;

int simple(int won, int year, double  irate) {
	int dan=won * (1 + irate * year);
	return dan;
}

int compound(int won, int year, double irate) {
	int bok=won * pow((1 + irate), year);
	return bok;
}

int main() {
	const double irate = 0.012;	
	int year,won;		
	cout << "����(��) : ";
	cin >> won;

	cout << "��ġ�Ⱓ(��) : ";
	cin >> year;

	cout << "���� : " << irate *100 << "%"<<endl;
	
	cout << "��ġ�Ⱓ" << "\t" << "����� �Ѽ��ɾ�(�ܸ�)" << "\t" << "����� �Ѽ��ɾ�(����)"<<endl;
	for (int i = 1; i <= year; i++) {
		cout << "  " << i << "��" << "\t\t" << simple(won, i, irate) << "��" << "\t\t" << compound(won, i, irate) << "��" << endl;
	}
}