#include "Guide.h"

int main()
{
	setlocale(LC_ALL, "rus");
	Guide guide;
	string buf;
	int choise;

	enum MENU {
		EXIT = 0,
		ADD,
		PRINT,
		FIND_NAME_FIRM,
		FIND_OWNER,
		FIND_PHONE,
		FIND_ACTIVITY
	};

	cout << "1 - Добавить\n2 - Вывести все записи\n3 - Поиск по названию\n4 - Поиск по владельцу\n5 - Поиск по номеру телефона\n6 - Поиск по роду деятельности\n";

	do
	{
		cin >> choise;
		switch (choise)
		{
		case ADD:
			guide.Add();
			break;
		case PRINT:
			guide.print();
			break;
		case FIND_NAME_FIRM:
			cout << "Введите название фирмы для поиска: ";
			cin >> buf;
			guide.Search_name(buf);
			break;
		case FIND_OWNER:
			cout << "Введите владельца для поиска: ";
			cin >> buf;
			guide.Search_owner(buf);
			break;
		case FIND_PHONE:
			cout << "Введите номер для поиска: ";
			cin >> buf;
			guide.Search_phone(buf);
			break;
		case FIND_ACTIVITY:
			cout << "Введите род деятельности для поиска: ";
			cin >> buf;
			guide.Search_activity(buf);
			break;
		case EXIT:
			break;
		}
	} while (choise != 0);

	return 0;
}