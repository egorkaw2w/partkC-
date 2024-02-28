#include <iostream>
#include <string>
#include <Windows.h>
#include <random>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Rus");
	while (true) {

		string word;
		cout << "Введите слово: ";
		cin >> word;
		cout << "1.Слово выводится задом наперед.\n2.Вывести слово без гласных.\n3.Вывести слово без согласных.\n4. Рандомно раскидывать буквы заданного слова.\nВведите действие: ";
		int choice;
		cin >> choice;

		if (choice == 1) {
			reverse(word.begin(), word.end());
			cout << word;
		}
		else if (choice == 2) {

			for (char i : word) {
				if (i == 'А' || i == 'а' || i == 'У' || i == 'у' || i == 'О' || i == 'о' || i == 'Ы' || i == 'ы' || i == 'Э' || i == 'э' || i == 'Е' || i == 'е' || i == 'Ё' || i == 'ё' || i == 'И' || i == 'и' || i == 'Ю' || i == 'ю' || i == 'Я' || i == 'я')
				{
					i = (char)"";

				}
				cout << i;
			}
		}
		else if (choice == 3) {
			string sogl = "БВГДЖЗКЛМНПРСТФХЦЧШЩбвгджзклмнпрстфхцчшщ";
			for (char i : word) {
				for (char j : sogl) {
					if (i == j) {
						i = (char)"";
					}
				}
				cout << i;
			}
		}
		else if (choice == 4) {
			random_shuffle(word.begin(), word.end());
			cout << word;
		}
		else {
			cout << "такой функции нет";
			continue; 
		}
		cout << "\n";
	}
}

