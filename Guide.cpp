#include "Guide.h"

void Guide::Add()
{
	cout << "Введите название фирмы: ";
	cin >> firm_name;
	cout << "Введите владельца: ";
	cin >> owner;
	cout << "Введите номер телефона: ";
	cin >> phone;
	cout << "Введите адрес: ";
	cin >> address;
	cout << "Введите род деятельности: ";
	cin >> activity;
	fstream stream{ PATH, ios::app };

	if (!stream)
	{
		throw logic_error("Не удалось открыть файл\n");
	}

	stream << firm_name << "\n" << owner << "\n" << phone << "\n" << address << "\n" << activity << "\n";
	stream.close();
}
void Guide::print()
{
	fstream stream(PATH, ios::in);

	if (!stream)
	{
		throw logic_error("Не удалось открыть файл\n");
	}

	while (!stream.eof())
	{
		stream >> firm_name >> owner >> phone >> address >> activity;
		cout << "\n--------------\n";
		cout << "Название фирмы: " << firm_name;
		cout << "\nВладелец: " << owner;
		cout << "\nТелефон: " << phone;
		cout << "\nАдрес: " << address;
		cout << "\nРод деятельности: " << activity;
		cout << "\n--------------\n";
	}
	stream.close();
}
void Guide::Search_name(string buf)
{
	fstream stream(PATH, ios::in);
	if (!stream)
	{
		throw logic_error("Не удалось открыть файл\n");
	}

	while (!stream.eof())
	{
		stream >> firm_name >> owner >> phone >> address >> activity;
		if (firm_name == buf)
		{
			cout << "\n--------------\n";
			cout << "Название фирмы: " << firm_name;
			cout << "\nВладелец: " << owner;
			cout << "\nТелефон: " << phone;
			cout << "\nАдрес: " << address;
			cout << "\nРод деятельности: " << activity;
			cout << "\n--------------\n";
		}
		else
		{
			cout << "Не найдено\n";
		}
	}
	stream.close();
}
void Guide::Search_owner(string buf)
{
	fstream stream(PATH, ios::in);
	if (!stream)
	{
		throw logic_error("Не удалось открыть файл\n");
	}

	while (!stream.eof())
	{
		stream >> firm_name >> owner >> phone >> address >> activity;
		if (owner == buf)
		{
			cout << "\n--------------\n";
			cout << "Название фирмы: " << firm_name;
			cout << "\nВладелец: " << owner;
			cout << "\nТелефон: " << phone;
			cout << "\nАдрес: " << address;
			cout << "\nРод деятельности: " << activity;
			cout << "\n--------------\n";
		}
		else
		{
			cout << "Не найдено\n";
		}
	}
	stream.close();
}
void Guide::Search_phone(string buf)
{
	fstream stream(PATH, ios::in);
	if (!stream)
	{
		throw logic_error("Не удалось открыть файл\n");
	}

	while (!stream.eof())
	{
		stream >> firm_name >> owner >> phone >> address >> activity;
		if (phone == buf)
		{
			cout << "\n--------------\n";
			cout << "Название фирмы: " << firm_name;
			cout << "\nВладелец: " << owner;
			cout << "\nТелефон: " << phone;
			cout << "\nАдрес: " << address;
			cout << "\nРод деятельности: " << activity;
			cout << "\n--------------\n";
		}
		else
		{
			cout << "Не найдено\n";
		}
	}
	stream.close();
}
void Guide::Search_activity(string buf)
{
	fstream stream(PATH, ios::in);
	if (!stream)
	{
		throw logic_error("Не удалось открыть файл\n");
	}

	while (!stream.eof())
	{
		stream >> firm_name >> owner >> phone >> address >> activity;
		if (activity == buf)
		{
			cout << "\n--------------\n";
			cout << "Название фирмы: " << firm_name;
			cout << "\nВладелец: " << owner;
			cout << "\nТелефон: " << phone;
			cout << "\nАдрес: " << address;
			cout << "\nРод деятельности: " << activity;
			cout << "\n--------------\n";
		}
		else
		{
			cout << "Не найдено\n";
		}
	}
	stream.close();
}