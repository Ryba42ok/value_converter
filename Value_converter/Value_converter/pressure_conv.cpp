#include <iostream>

#include "pressure_conv.h"

void pressure_conv()
{
	using namespace std;

	int k;
	bool repeat = true;


	const double Pa = 1.0;
	const double kPa = 1000.0;
	const double MPa = 1000000.0;
	const double atm = 101325.0;
	const double HgC = 133.3;
	const double H2OC = 9.8;


	while (repeat)
	{
		double to_Pa, result;
		double pressure;
		bool error = false;
		cout << "\n--- КОНВЕРТЕР ДАВЛЕНИЯ ---\n";
		cout << "\nИз какой единицы измерения вы хотите перевести: \n";
		cout << "1 - Паскаль (Па) \n";
		cout << "2 - Килопаскаль (кПа) \n";
		cout << "3 - Мегапаскаль (МПа) \n";
		cout << "4 - Стандартная физическая атмосфера (атм) \n";
		cout << "5 - Миллиметр ртутного слолба (мм рт.ст.) \n";
		cout << "6 - Миллиметр водяного столба (мм вод.ст.) \n\n";

		cout << "7 - Справка по переводу \n\n";

		cout << "8 - Выйти из функции\n\n";

		cin >> k;

		cin.clear();
		cin.ignore();

		switch (k)
		{
		case 1:
		{
			cout << "Введите величину: "; cin >> pressure;

			if (pressure < 0) cout << "Длина не может быть отрецательной. Значение заменено на положительное. \n";

			to_Pa = to_the_Pa(Pa, abs(pressure));
			break;
		}

		case 2:
		{
			cout << "Введите величину: "; cin >> pressure;

			if (pressure < 0) cout << "Длина не может быть отрецательной. Значение заменено на положительное. \n";

			to_Pa = to_the_Pa(kPa, abs(pressure));
			break;
		}

		case 3:
		{
			cout << "Введите величину: "; cin >> pressure;

			if (pressure < 0) cout << "Длина не может быть отрецательной. Значение заменено на положительное. \n";

			to_Pa = to_the_Pa(MPa, abs(pressure));
			break;
		}

		case 4:
		{
			cout << "Введите величину: "; cin >> pressure;

			if (pressure < 0) cout << "Длина не может быть отрецательной. Значение заменено на положительное. \n";

			to_Pa = to_the_Pa(atm, abs(pressure));
			break;
		}

		case 5:
		{
			cout << "Введите величину: "; cin >> pressure;

			if (pressure < 0) cout << "Длина не может быть отрецательной. Значение заменено на положительное. \n";

			to_Pa = to_the_Pa(HgC, abs(pressure));
			break;
		}

		case 6:
		{
			cout << "Введите величину: "; cin >> pressure;

			if (pressure < 0) cout << "Длина не может быть отрецательной. Значение заменено на положительное. \n";

			to_Pa = to_the_Pa(H2OC, abs(pressure));
			break;
		}

		case 7:
		{
			cout << "\n1 Па =         " << Pa << " Па" << endl;
			cout << "1 кПа =        " << kPa << " Па" << endl;
			cout << "1 МПа =        " << MPa << " Па" << endl;
			cout << "1 атм =        " << atm << " Па" << endl;
			cout << "1 мм рт.ст. =  " << HgC << " Па" << endl;
			cout << "1 мм вод.ст. = " << H2OC << " Па" << endl;
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
			cout << "1 - Паскаль (Па) \n";
			cout << "2 - Килопаскаль (кПа) \n";
			cout << "3 - Мегапаскаль (МПа) \n";
			cout << "4 - Стандартная физическая атмосфера (атм) \n";
			cout << "5 - Миллиметр ртутного слолба (мм рт.ст.) \n";
			cout << "6 - Миллиметр водяного столба (мм вод.ст.) \n";

			cin >> k;
			switch (k)
			{
			case 1:
			{
				result = search_res_pressure(Pa, to_Pa);
				break;
			}

			case 2:
			{
				result = search_res_pressure(kPa, to_Pa);
				break;
			}

			case 3:
			{
				result = search_res_pressure(MPa, to_Pa);
				break;
			}

			case 4:
			{
				result = search_res_pressure(atm, to_Pa);
				break;
			}

			case 5:
			{
				result = search_res_pressure(HgC, to_Pa);
				break;
			}

			case 6:
			{
				result = search_res_pressure(H2OC, to_Pa);
				break;
			}


			default:
			{
				cout << "Ошибка ввода. \n";
			}
			}
			cout << "\nРезультат вычисления равен: " << result;

			cout << "\n\n";
		}


		cout << "Хотите ли вы ещё раз воспользоваться этой функцией\n1 - Да \n2 - Нет  \n\n"; cin >> k;
		switch (k)
		{
		case 2: repeat = false; break;
		}
	}
}