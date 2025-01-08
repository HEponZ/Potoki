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

	cout << "1 - ��������\n2 - ������� ��� ������\n3 - ����� �� ��������\n4 - ����� �� ���������\n5 - ����� �� ������ ��������\n6 - ����� �� ���� ������������\n";

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
			cout << "������� �������� ����� ��� ������: ";
			cin >> buf;
			guide.Search_name(buf);
			break;
		case FIND_OWNER:
			cout << "������� ��������� ��� ������: ";
			cin >> buf;
			guide.Search_owner(buf);
			break;
		case FIND_PHONE:
			cout << "������� ����� ��� ������: ";
			cin >> buf;
			guide.Search_phone(buf);
			break;
		case FIND_ACTIVITY:
			cout << "������� ��� ������������ ��� ������: ";
			cin >> buf;
			guide.Search_activity(buf);
			break;
		case EXIT:
			break;
		}
	} while (choise != 0);

	return 0;
}