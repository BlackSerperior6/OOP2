#pragma once
#include <iostream>

using namespace std;

class Salary
{
public:

	Salary() //Конструктор без параметров
	{
		cout << "Конструктор без параметров был вызван" << endl << endl;

		FullName = "Placeholder";
		Amount = 1;
		Bonus = 1;
	}

	Salary(string fullName, double amount, int bonus)//Конструктор с параметрами
	{
		cout << "Вызван конструктор с параметрами" << endl;
		SetFullName(fullName);
		SetAmount(amount);
		SetBonus(bonus);
	}

	Salary(Salary &differentSalary) //Конструктор копирования
	{
		cout << "Вызван конструктор копирования" << endl;
		SetFullName(differentSalary.GetFullname());
		SetAmount(differentSalary.GetAmount());
		SetBonus(differentSalary.GetBonus());
	}

	~Salary() //Деструктор
	{
		cout << "Был вызван деструктор. Имя уничтоженного элемента - " << FullName << endl;
	}

	string GetFullname() //Получатель имени
	{
		return FullName;
	}

	double GetAmount() //Получатель размера зарплаты
	{
		return Amount;
	}

	int GetBonus() //Получатель премии
	{
		return Bonus;
	}

	void SetFullName(string newFullName) //Установщик имени
	{
		FullName = newFullName;
	}

	void SetAmount(double newAmount) //Установщик размера
	{
		Amount = newAmount;
	}

	void SetBonus(int newBonus) //Установщик премии  
	{
		Bonus = newBonus;
	}

	void Print() //Метод печати объекта класса
	{
		cout << "ФИО: " << FullName << ", зарплата: " << Amount << ", премия: " << Bonus << "%" << endl;
	}

private:
	//Поля класса
	string FullName; //ФИО
	double Amount; //Зарплата
	int Bonus; //Премия
};
