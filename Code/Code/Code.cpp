#include <string>
#include<windows.h>

#include "Salary.h"

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	Salary* salarys[4];

	salarys[0] = new Salary;

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

	salarys[1] = new Salary(Fullname, amount, bonus);
	salarys[2] = new Salary(salarys[0]);
	salarys[3] = new Salary(salarys[1]);

	cout << endl;

	for (int i = 0; i < 4; i++)
	{
		salarys[i]->Print();

		delete salarys[i];
		cout << endl;
	}
}

