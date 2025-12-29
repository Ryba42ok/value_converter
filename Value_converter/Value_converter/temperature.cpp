#include <iostream>
#include <string>
#include <sstream>
#include "header.h"

using namespace std;

static bool is_float(const string& str) {  //Проверка на float число
    if (str.empty()) return false;
    istringstream ss(str);
    double val;
    return (ss >> val) && (ss.eof());
}

int tempcalculation()
{
    int c;
    bool repeat = true;
    int original, needful;
    float value, result;
    string input;

    setlocale(LC_ALL, "Russian");

    while (repeat) {
        cout << "\n--- КОНВЕРТЕР ТЕМПЕРАТУРЫ ---\n";
        cout << "Введите исходную единицу измерения\n1 - Градус Цельсия °C\n2 - Градус Фаренгейта °F\n3 - Градус Кельвина K\n\n4 - выход\n" << endl;
        cin >> original;
        if (original != 1 && original != 2 && original != 3 && original != 4) {
            cout << "Неверный ввод исходной единицы измерения" << endl;
            return 0;
        }
        if (original == 4) {
            repeat = false;
            continue;
            break;
        }
        cout << "Введите нужную единицу измерения\n1 - Градус Цельсия °C\n2 - Градус Фаренгейта °F\n3 - Градус Кельвина K\n\n" << endl;
        cin >> needful;
        if (needful != 1 && needful != 2 && needful != 3) {
            cout << "Неверный ввод нужной единицы измерения" << endl;
            return 0;
        }

        cout << "Введите величину" << endl;
        cin >> input;
        if (!is_float(input)) { //Проверка на float число
            cout << "Неверный ввод величины, ожидалось число." << endl;
            return 0;
        }
        value = stof(input);


        switch (original) {
        case 1: {
            switch (needful) {
            case 1:
                result = value;
                break;
            case 2:
                result = (value * 1.8) + 32;
                break;
            case 3:
                result = value + 273.15;
                break;
            default:
                break;
            }
            break;
        }
        case 2: {
            switch (needful) {
            case 1:
                result = (value - 32) / 1.8;
                break;
            case 2:
                result = value;
                break;
            case 3:
                result = ((value - 32) / 1.8) + 273.15;
                break;
            default:
                break;
            }
            break;
        }

        case 3: {
            switch (needful) {
            case 1:
                result = value - 273.15;
                break;
            case 2:
                result = ((value - 273.15) * 1.8) + 32;
                break;
            case 3:
                result = value;
                break;
            default:
                break;
            }
            break;
        }
        case 4: {
            return 0;
        }

        default: {
            break;
        }
        }

        if (needful == 1) {
            cout << "Величина в нужной единице измерения : " << result << " °C " << endl;
        }
        else if (needful == 2) {
            cout << "Величина в нужной единице измерения : " << result << " °F " << endl;
        }
        else if (needful == 3) {
            cout << "Величина в нужной единице измерения : " << result << " K " << endl;
        }
        cout << "Еще раз? 1 - Да "; cin >> c;
        if (c != 1) repeat = false;
    }
}