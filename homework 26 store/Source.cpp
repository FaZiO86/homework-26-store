#include <iostream>
#include "Products.h"

using namespace std;



int main() {
	setlocale(LC_ALL, "Russian");
	product X;
	productData(X);							//������� ��� ���� ������� �� ����, ��� ������������ ��� ������ ������������, ���������� � ���� �� ������� ������! )
	cout << "\n����� �� ����� ������:\n";
	printProd(X);
	cout << endl;
	cout << "������ ��������� ������ ��� ��� ����������: " << fullPrice(X) << endl << endl;
	cout << "������� ����������� ������, ������� ������ �������: ";
	int n;
	cin >> n;
	while (n > X.number) {
		cout << "�������� ���� ���������� ������, ��� ����!\n������� ���������� ��� ��� ���������� ���������� ��������: ";
		cin >> n;
	}
	sell(X, n);
	printProd(X);
	

	return 0;
}