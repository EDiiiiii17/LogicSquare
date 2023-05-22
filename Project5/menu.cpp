#include <iostream>
using namespace std;

void menu()
{
        setlocale(LC_ALL, "RUS");

        int choice;
        bool exit = false;

        while (!exit) {
            cout << "\n\n\n";
            cout << "\t\033[1;32m######   ##   ##    ######     #####   ##  ####  ##   ##\033[0m\n";
            cout << "\t\033[1;32m#    ##   #   ##   ##    ##   ##   ##  #  ##      #   ##  \033[0m\n";
            cout << "\t\033[1;32m#          #####   ##    ##   ##   ##  ###         #####\033[0m\n";
            cout << "\t\033[1;32m#    ##       ##  ##########  ##   ##  #  ##          ##\033[0m\n";
            cout << "\t\033[1;32m######    ######  ##      ##   #####   ##  ####   ###### \033[0m\n";

            cout << "\n\n\t\033[1;34m1.Начало игры\033[0m";
            cout << "\n\t\033[1;31m2.Выход\n\033[0m";
            cout << "\t\033[1;32mСделай выбор (1-2): \033[0m";

            while (!(cin >> choice) || choice < 1 || choice > 2) {
                cout << "\n\t\t\033[1;31mНекорректный ввод! Сделай выбор 1 или 2: \033[0m\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            switch (choice) {
            case 1:
                
                cout << "\n\t\t\033[1;32mИгра завершена!\033[0m" << endl;
                break;
            case 2:
                exit = true;
                break;
            }
        }

    }
    