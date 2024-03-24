#pragma once
#include <iostream>

using namespace std;

class Salary
{
public:

	Salary()
	{
		cout << "Конструктор без параметров был вызван" << endl;
	}

	string GetFullname()
	{
		return FullName;
	}

	double GetAmount()
	{
		return Amount;
	}

	int GetBonus()
	{
		return Bonus;
	}

	void SetFullName(string newFullName)
	{
		FullName = newFullName;
	}

	void SetAmount(double newAmount)
	{
		Amount = newAmount;
	}

	void SetBonus(int newBonus) 
	{
		Bonus = newBonus;
	}

	Salary(string fullName, double amount, int bonus)
	{
		cout << "Вызван конструктор с параметрами" << endl;
		SetFullName(fullName);
		SetAmount(amount);
		SetBonus(bonus);
	}

	Salary(Salary *differentSalary)
	{
		cout << "Вызван конструктор копирования" << endl;
		SetFullName(differentSalary->GetFullname());
		SetAmount(differentSalary->GetAmount());
		SetBonus(differentSalary->GetBonus());
	}

	~Salary() 
	{
		cout << "Был вызван дезруктор. Имя уничтоженного элемента - " << FullName << endl;
	}

	void Print()
	{
		cout << "ФИО: " << FullName << ", зарплата: " << Amount << ", премия: " << Bonus << endl;
	}

private:
	//Дефолтные значения
	string FullName = "Placeholder";
	double Amount = 1;
	int Bonus = 1;
};
