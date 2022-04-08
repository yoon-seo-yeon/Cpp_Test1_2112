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
	cout << "원금(원) : ";
	cin >> won;

	cout << "예치기간(년) : ";
	cin >> year;

	cout << "이율 : " << irate *100 << "%"<<endl;
	
	cout << "예치기간" << "\t" << "만기시 총수령액(단리)" << "\t" << "만기시 총수령액(복리)"<<endl;
	for (int i = 1; i <= year; i++) {
		cout << "  " << i << "년" << "\t\t" << simple(won, i, irate) << "원" << "\t\t" << compound(won, i, irate) << "원" << endl;
	}
}