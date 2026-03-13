#include <iostream>
#include <Windows.h>

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int number{};
	std::cout << "Введите число: \n";
	std::cin >> number;
	std::cout << "Вы ввели:\n" << number << std::endl;

	std::string hello{};
	std::cout << "Введите слово: \n";
	std::cin >> hello;
	std::cout << "Вы ввели:\n" << hello << std::endl;

	return EXIT_SUCCESS;
}