#include "Guide.h"

void Guide::Add()
{
	cout << "������� �������� �����: ";
	cin >> firm_name;
	cout << "������� ���������: ";
	cin >> owner;
	cout << "������� ����� ��������: ";
	cin >> phone;
	cout << "������� �����: ";
	cin >> address;
	cout << "������� ��� ������������: ";
	cin >> activity;
	fstream stream{ PATH, ios::app };

	if (!stream)
	{
		throw logic_error("�� ������� ������� ����\n");
	}

	stream << firm_name << "\n" << owner << "\n" << phone << "\n" << address << "\n" << activity << "\n";
	stream.close();
}
void Guide::print()
{
	fstream stream(PATH, ios::in);

	if (!stream)
	{
		throw logic_error("�� ������� ������� ����\n");
	}

	while (!stream.eof())
	{
		stream >> firm_name >> owner >> phone >> address >> activity;
		cout << "\n--------------\n";
		cout << "�������� �����: " << firm_name;
		cout << "\n��������: " << owner;
		cout << "\n�������: " << phone;
		cout << "\n�����: " << address;
		cout << "\n��� ������������: " << activity;
		cout << "\n--------------\n";
	}
	stream.close();
}
void Guide::Search_name(string buf)
{
	fstream stream(PATH, ios::in);
	if (!stream)
	{
		throw logic_error("�� ������� ������� ����\n");
	}

	while (!stream.eof())
	{
		stream >> firm_name >> owner >> phone >> address >> activity;
		if (firm_name == buf)
		{
			cout << "\n--------------\n";
			cout << "�������� �����: " << firm_name;
			cout << "\n��������: " << owner;
			cout << "\n�������: " << phone;
			cout << "\n�����: " << address;
			cout << "\n��� ������������: " << activity;
			cout << "\n--------------\n";
		}
		else
		{
			cout << "�� �������\n";
		}
	}
	stream.close();
}
void Guide::Search_owner(string buf)
{
	fstream stream(PATH, ios::in);
	if (!stream)
	{
		throw logic_error("�� ������� ������� ����\n");
	}

	while (!stream.eof())
	{
		stream >> firm_name >> owner >> phone >> address >> activity;
		if (owner == buf)
		{
			cout << "\n--------------\n";
			cout << "�������� �����: " << firm_name;
			cout << "\n��������: " << owner;
			cout << "\n�������: " << phone;
			cout << "\n�����: " << address;
			cout << "\n��� ������������: " << activity;
			cout << "\n--------------\n";
		}
		else
		{
			cout << "�� �������\n";
		}
	}
	stream.close();
}
void Guide::Search_phone(string buf)
{
	fstream stream(PATH, ios::in);
	if (!stream)
	{
		throw logic_error("�� ������� ������� ����\n");
	}

	while (!stream.eof())
	{
		stream >> firm_name >> owner >> phone >> address >> activity;
		if (phone == buf)
		{
			cout << "\n--------------\n";
			cout << "�������� �����: " << firm_name;
			cout << "\n��������: " << owner;
			cout << "\n�������: " << phone;
			cout << "\n�����: " << address;
			cout << "\n��� ������������: " << activity;
			cout << "\n--------------\n";
		}
		else
		{
			cout << "�� �������\n";
		}
	}
	stream.close();
}
void Guide::Search_activity(string buf)
{
	fstream stream(PATH, ios::in);
	if (!stream)
	{
		throw logic_error("�� ������� ������� ����\n");
	}

	while (!stream.eof())
	{
		stream >> firm_name >> owner >> phone >> address >> activity;
		if (activity == buf)
		{
			cout << "\n--------------\n";
			cout << "�������� �����: " << firm_name;
			cout << "\n��������: " << owner;
			cout << "\n�������: " << phone;
			cout << "\n�����: " << address;
			cout << "\n��� ������������: " << activity;
			cout << "\n--------------\n";
		}
		else
		{
			cout << "�� �������\n";
		}
	}
	stream.close();
}