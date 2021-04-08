#include <iostream>
#include <vector>


#include "Student.h"
#include "Teacher.h"
#include "Manager.h"

#include "menu.h"


using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	vector <Student> students;
	vector <Teacher> teachers;
	vector <Manager> managers;

	bool exit=false;
	char select;
	do {
		ShowMenu();
		cout << "Введите номер: ";
		cin >> select;
		switch (select) {
		case '1': //1. Добавить студента
			break;
		case '2': //Добавить преподавателя
			break;
		case '3': //Добавить менеджера
			break;
		case '4': //Показать всех студентов
			break;
		case '5': //Показать всех преподавателей
			break;
		case '6': //Показать всех менеджеров
			break;
		case '0': //Выход
			exit = true;
			break;
		default:
			break;
		}


		
	} while (!exit);

	cout << "До свидания...";

	return 0;
	
}
