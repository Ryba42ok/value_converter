#include<iostream>
#include "power.h"
using namespace std;
void Power_conv()
{
    int k;
    bool repeat = true;
    const double HP = 0.00134102;
    const double BTU_H = 3.412142;
    const double ERG_S = 10000000.0;

    while (repeat)
    {
        double to_standard = 0, result = 0;
        double power;
        bool error = false;

        cout << "\n--- КОНВЕРТЕР МОЩНОСТИ ---\n";
        cout << "1 - Ватты (Вт)\n";
        cout << "2 - Лошадиные силы (hp)\n";
        cout << "3 - BTU/ч\n";
        cout << "4 - Эрг/с\n\n";
        cout << "5 - Выход\n";
        cout << "Выберите исходную единицу: ";
        cin >> k;
        cin.clear();
        cin.ignore();

        if (k == 5) {
            repeat = false; continue; break;
        }
        cout << "Введите значение: ";
        cin >> power;
        cin.clear();
        cin.ignore();
        if (power <= 0)
        {
            cout << "Мощность не должна быть отрицательной или равна 0";
            break;
        }

        switch (k) {
        case 1: to_standard = power; break;
        case 2: to_standard = power / HP; break;
        case 3: to_standard = power / BTU_H; break;
        case 4: to_standard = power / ERG_S; break;
       

        default: error = true; break;
        }

        if (!error) {
            cout << "В какую перевести?\n1-Вт\n2-hp\n3-BTU/ч\n4-Эрг/с: ";
            cin >> k;
            cin.clear();
            cin.ignore();
            switch (k) {
            case 1: result = to_standard; break;
            case 2: result = to_standard * HP; break;
            case 3: result = to_standard * BTU_H; break;
            case 4: result = to_standard * ERG_S; break;
            default: cout << "\nОшибка выбора\n"; error = true; break;
            }

            if (!error) {
                cout << "\nРезультат: " << result << endl;
            }
        }
        else
        {
            cout << "Ошибка при вводе выбора";
        }
        cout << "\nЕще раз? (1 - да, 0 - нет): ";
        cin >> k;
        if (k != 1) repeat = false;
    }
}


