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
	int month_number = -1;

	Mos mos;

    setlocale(LC_ALL, "Russian");
	while (true)
	{
    std::cout << "������� ����� ������:";
	std::cin >> month_number;
	mos = static_cast<Mos>(month_number);
	if (mos < 0 || mos > 12) {
		std::cout << "������������ �����!" << std::endl;		
		std::cout << "�� ��������" << std::endl;
	    continue;
	}	

	switch (mos)
	{
	 case January:
		 std::cout << "������" << std::endl; 
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