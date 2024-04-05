#pragma once

#include "mystruct.h"
#include "functions.h"

int main() {

	setlocale(LC_ALL, "RUS");
	int choose;
	cout << "\n\nМеню:" << "\n\n'1' - вывод имеющейся базы данных" << "\n'2' - добавить новый элемент в базу данных\n'3' - очистить базу\n'4' - очистить консоль\n\nВвод: ";
	cin >> choose;
	switch (choose) {
	case 1:
		readfile();
		main();
	case 2:
		write();
		main();
	case 3:
		udalenie();
		main();
	case 4:
		chistka();
		main();
	default:
		cout << "Ошибка. Пункт меню отсутствует." << endl;
	}
}
