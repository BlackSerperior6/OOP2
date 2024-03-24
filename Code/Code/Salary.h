#pragma once
#include <iostream>

using namespace std;

class Salary
{
public:

	Salary()
	{
		cout << "����������� ��� ���������� ��� ������" << endl;
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
		cout << "������ ����������� � �����������" << endl;
		SetFullName(fullName);
		SetAmount(amount);
		SetBonus(bonus);
	}

	Salary(Salary *differentSalary)
	{
		cout << "������ ����������� �����������" << endl;
		SetFullName(differentSalary->GetFullname());
		SetAmount(differentSalary->GetAmount());
		SetBonus(differentSalary->GetBonus());
	}

	~Salary() 
	{
		cout << "��� ������ ���������. ��� ������������� �������� - " << FullName << endl;
	}

	void Print()
	{
		cout << "���: " << FullName << ", ��������: " << Amount << ", ������: " << Bonus << endl;
	}

private:
	//��������� ��������
	string FullName = "Placeholder";
	double Amount = 1;
	int Bonus = 1;
};
