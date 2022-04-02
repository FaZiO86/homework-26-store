#include <iostream>
#include "Products.h"

void productData(product& P) {
	std::cout << "Введите наименование товара -> ";
	std::cin >> P.name;
	std::cout << "Введите количество товара -> ";
	std::cin >> P.number;
	std::cout << "Введите стоимость товара за единицу -> ";
	std::cin >> P.price;
}

void printProd(product& P) {
	std::cout << "Название товара: " << P.name << std::endl;
	std::cout << "Количество товара: " << P.number << std::endl;
	std::cout << "Цена за единицу товара: " << P.price << std::endl;
}

int fullPrice(product& P) {
	return P.number * P.price;
}
void sell(product& P, int num) {
	P.number -= num;
}