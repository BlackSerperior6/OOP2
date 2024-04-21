#include <string>
#include<windows.h>

#include "Salary.h"

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	Salary* salarys[4]; //Массив из четырех указатель на объекты класса Salary

	salarys[0] = new Salary; //Первый элемент инициализируется без параметров

	string Fullname;

	do
	{
		cout << "Введите ФИО сотрудника:" << endl;
		getline(cin, Fullname);
	} 
	while (Fullname.empty());

	double amount;
	int bonus;
	cout << "Введите зарплату и премию сотрудника:" << endl;

	cin >> amount >> bonus;

	cout << endl;

	salarys[1] = new Salary(Fullname, amount, bonus); //Второй элемент использует кон. с параметрами
	salarys[2] = new Salary(*salarys[0]); //Третий элемент копирует первый
	salarys[3] = new Salary(*salarys[1]); //Четвертый элемент копирует второй

	cout << endl;

	for (int i = 0; i < 4; i++) //Выводим все 4 объекта класса
	{
		salarys[i]->Print();

		delete salarys[i];

		cout << endl;
	}
}

