#include <iostream>

enum Mos {
	January=1,
	February,	 
	March,
	April,	 
	May,	 
	June,	 
	July,	 
	August,	 
	September,	 
	October,	 
	November,	 
	December,	 
};

int main() {
	int number = -1;

    setlocale(LC_ALL, "Russian");
	while (number < 12)
	{
	std::cout << "������� ����� ������:" << std::endl;
	std::cin >> number;

	if (number > 12) {
		std::cout << "������������ �����!" << std::endl;
		break;
	}
	if (number == 0) {
		std::cout << "�� ��������" << std::endl;
		break;
	}

	switch (number)
	{
	 case January:
		 std::cout << "������" << std::endl; continue;
	 case February:
		 std::cout << "�������" << std::endl; continue;
	 case March:
		 std::cout << "����" << std::endl; continue;
	 case April:
		 std::cout << "������" << std::endl; continue;
	 case May:
		 std::cout << "���" << std::endl; continue;
	 case June:
		 std::cout << "����" << std::endl; continue;
	 case July:
		 std::cout << "����" << std::endl; continue;
	 case August:
		 std::cout << "������" << std::endl; continue;
	 case September:
		 std::cout << "��������" << std::endl; continue;
	 case October:
		 std::cout << "�������" << std::endl; continue;
	 case November:
		 std::cout << "������" << std::endl; continue;
	 case December:
		 std::cout << "�������" << std::endl; continue;
	 }			
   }
}