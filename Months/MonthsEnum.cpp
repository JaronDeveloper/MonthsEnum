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
	    continue;
	}	

	switch (mos)
	{
	 case January:
		 std::cout << "Январь" << std::endl; 
	 case February:
		 std::cout << "Февраль" << std::endl; continue;
	 case March:
		 std::cout << "Март" << std::endl; continue;
	 case April:
		 std::cout << "Апрель" << std::endl; continue;
	 case May:
		 std::cout << "Май" << std::endl; continue;
	 case June:
		 std::cout << "Июнь" << std::endl; continue;
	 case July:
		 std::cout << "Июль" << std::endl; continue;
	 case August:
		 std::cout << "Август" << std::endl; continue;
	 case September:
		 std::cout << "Сентябрь" << std::endl; continue;
	 case October:
		 std::cout << "Октябрь" << std::endl; continue;
	 case November:
		 std::cout << "Ноябрь" << std::endl; continue;
	 case December:
		 std::cout << "Декабрь" << std::endl; continue;
	 }		 
   }
}