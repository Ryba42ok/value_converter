#include <iostream>

#include "length_conv.h"

void length_conv()
{
	using namespace std;

	int k;
	bool repeat = true;


	const double m = 1.0;
	const double km = 1000.0;
	const double sm = 0.01;
	const double mm = 0.001;
	const double nm = 0.000000001;
	const double AE = 149597870700.0;


	while (repeat)
	{
		double to_m, result;
		double lenght;
		bool error = false;
		cout << "\n--- КОНВЕРТЕР ДЛИНЫ ---\n";
		cout << "\nИз какой единицы измерения вы хотите перевести: \n";
		cout << "1 - Метр (м) \n";
		cout << "2 - Километр (км) \n";
		cout << "3 - Сантиметр (см) \n";
		cout << "4 - Миллиметр (мм) \n";
		cout << "5 - Нанометр (нм) \n";
		cout << "6 - Астрономическая Единица (а.е.) \n\n";

		cout << "7 - Справка по переводу \n\n";

		cout << "8 - Выйти из функции\n\n";

		cin >> k;

		cin.clear();
		cin.ignore();

		switch (k)
		{
		case 1:
		{
			length_conv();
			break;
		}

		case 2:
		{
			cout << "Введите величину: "; cin >> lenght;

			if (lenght < 0) cout << "Длина не может быть отрецательной. Значение заменено на положительное. \n";

			to_m = to_the_m(km, abs(lenght));
			break;
		}

		case 3:
		{
			cout << "Введите величину: "; cin >> lenght;

			if (lenght < 0) cout << "Длина не может быть отрецательной. Значение заменено на положительное. \n";

			to_m = to_the_m(sm, abs(lenght));
			break;
		}

		case 4:
		{
			cout << "Введите величину: "; cin >> lenght;

			if (lenght < 0) cout << "Длина не может быть отрецательной. Значение заменено на положительное. \n";

			to_m = to_the_m(mm, abs(lenght));
			break;
		}

		case 5:
		{
			cout << "Введите величину: "; cin >> lenght;

			if (lenght < 0) cout << "Длина не может быть отрецательной. Значение заменено на положительное. \n";

			to_m = to_the_m(nm, abs(lenght));
			break;
		}

		case 6:
		{
			cout << "Введите величину: "; cin >> lenght;

			if (lenght < 0) cout << "Длина не может быть отрецательной. Значение заменено на положительное. \n";

			to_m = to_the_m(AE, abs(lenght));
			break;
		}

		case 7:
		{
			cout << "\n1 м =    " << m << " м" << endl;
			cout << "1 км =   " << km << " м" << endl;
			cout << "1 см =   " << sm << " м" << endl;
			cout << "1 мм =   " << mm << " м" << endl;
			cout << "1 нм =   " << nm << " м" << endl;
			cout << "1 а.е. = " << AE << " м" << endl;
			continue;
		}

		case 8: {
			repeat = false;
			continue;
			break;
		}

		default:
			cout << "Ошибка ввода"; error = true;
			break;
		}

		if (error == false)
		{

			cout << "\nВ какую единицу измерения вы хотите перевести: \n";
			cout << "1 - Метр (m) \n";
			cout << "2 - Километр (km) \n";
			cout << "3 - Сантиметр (sm) \n";
			cout << "4 - Миллиметр (mm) \n";
			cout << "5 - Нанометр (nm) \n";
			cout << "6 - Астрономическая Единица (а.е.) \n";

			cin >> k;
			switch (k)
			{
			case 1:
			{
				result = search_res_length(m, to_m);
				break;
			}

			case 2:
			{
				result = search_res_length(km, to_m);
				break;
			}

			case 3:
			{
				result = search_res_length(sm, to_m);
				break;
			}

			case 4:
			{
				result = search_res_length(mm, to_m);
				break;
			}

			case 5:
			{
				result = search_res_length(nm, to_m);
				break;
			}

			case 6:
			{
				result = search_res_length(AE, to_m);
				break;
			}


			default:
			{
				cout << "Ошибка ввода";
			}
			}
			cout << "\nРезультат вычисления равен: " << result;

			cout << "\n\n";
		}


		cout << "Хотите ли вы ещё раз воспользоваться этой функцией\n1 - Да \n2 - Нет  \n\n"; cin >> k;
		switch (k)
		{
		case 1: break;

		case 2: repeat = false; break;

		default: cout << "Ошибка ввода \n"; repeat = false; break;
		}
	}
}