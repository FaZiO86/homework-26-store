#include <iostream>
#include "Products.h"

using namespace std;



int main() {
	setlocale(LC_ALL, "Russian");
	product X;
	productData(X);							//Добавил ещё одну функцию от себя, где пользователь сам вводит наименование, количнство и цену за единицу товара! )
	cout << "\nВывод на экран данных:\n";
	printProd(X);
	cout << endl;
	cout << "Полная стоимость товара при его количестве: " << fullPrice(X) << endl << endl;
	cout << "Введите колчичество товара, которое хотите вычесть: ";
	int n;
	cin >> n;
	while (n > X.number) {
		cout << "Введённое вами количество больше, чем есть!\nВведите пожалуйста ещё раз вычетаемое количество продукта: ";
		cin >> n;
	}
	sell(X, n);
	printProd(X);
	

	return 0;
}