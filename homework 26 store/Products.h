#pragma once
#include <iostream>
#include <string>

struct product {
	std::string name;
	int number = 0;
	int price;
};
//Ввод от пользователя данных товара.
void productData(product& P);
//Вывод всей информации о товаре.
void printProd(product& P);
//Вывод полной стоимости товара.
int fullPrice(product& P);
//умеьншение количества товара
void sell(product& P, int num);
