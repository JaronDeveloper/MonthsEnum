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
    std::cout << "Введите номер месяца:";
	std::cin >> month_number;
	mos = static_cast<Mos>(month_number);
	if (mos < 0 || mos > 12) {
		std::cout << "Неправильный номер!" << std::endl;		
		std::cout << "До свидания" << std::endl;
		break;
	}	

	switch (mos)
	{
	 case 1:
		 std::cout << "Январь" << std::endl; continue;
	 case 2:
		 std::cout << "Февраль" << std::endl; continue;
	 case 3:
		 std::cout << "Март" << std::endl; continue;
	 case 4:
		 std::cout << "Апрель" << std::endl; continue;
	 case 5:
		 std::cout << "Май" << std::endl; continue;
	 case 6:
		 std::cout << "Июнь" << std::endl; continue;
	 case 7:
		 std::cout << "Июль" << std::endl; continue;
	 case 8:
		 std::cout << "Август" << std::endl; continue;
	 case 9:
		 std::cout << "Сентябрь" << std::endl; continue;
	 case 10:
		 std::cout << "Октябрь" << std::endl; continue;
	 case 11:
		 std::cout << "Ноябрь" << std::endl; continue;
	 case 12:
		 std::cout << "Декабрь" << std::endl; continue;
	 }		 
   }
}