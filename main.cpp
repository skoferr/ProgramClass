#pragma once

#include "mystruct.h"
#include "functions.h"

int main() {

	setlocale(LC_ALL, "RUS");
	int choose;
	cout << "\n\n����:" << "\n\n'1' - ����� ��������� ���� ������" << "\n'2' - �������� ����� ������� � ���� ������\n'3' - �������� ����\n'4' - �������� �������\n\n����: ";
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
		cout << "������. ����� ���� �����������." << endl;
	}
}
