
#include "pch.h"
#include "conio.h"
#include "stdio.h"
#include <iostream>
#include "clocale"
#include <cstdalign>

void Menu()
{
	std::cout << "Выберите задание\n";
	std::cout << "1. Задание №1\n";
	std::cout << "2. Задание №2\n";
	std::cout << "3. Задание №3\n";
	std::cout << "4. Задание №4\n";
	std::cout << "5. Выход\n" << std::endl;
	std::cout << ">>> ";
}

void Graphic()
{
	float x, y;
	std::cout << "Ведите кординаты x: ";
	std::cin >> y;
	std::cout << "Ведите кординаты y: ";
	std::cin >> x;
	if (((x >= 0) && (x<=1.5)&&(y>=0)&&(y<2) && (y = -pow(x, 2))) || (y = -pow(x, 2)) && (y >= 0)&&(y<=2)&&(x<=0)&&(x<=1.5))
		std::cout << "Точка попадает в заданную область\n" << std::endl;
	else
		std::cout << "Точка не попадает в заданную область\n" << std::endl;
}

void Task2()

{
	float x, y, f, z, a, b;
	int choice;
	std::cout << "Введите значение a: ";
	std::cin >> a;
	std::cout << "Введите значение b: ";
	std::cin >> b;
	std::cout << "Введите значение z: ";
	std::cin >> z;
	if (z >= 1)
	{
		x = z;
		std::cout << "Выбрана первая ветвь решения\n";
	}
	else
	{
		x = z + log(z);
		std::cout << "Выбрана вторая ветвь решения\n";
	}
	std::cout << "Выберите функция f(x):\n  1 - 2x\n  2 - x^2\n  3 - x/3\n ";
	scanf_s("%d", &choice);
		switch (choice)
		{
		case 1: f = 2 * x;
			std::cout << "f(x)= " << f;
			break;
		case 2: f = pow(x, 2);
			std::cout << "f(x)= " << f;
			break;
		case 3: f = x / 3;
			std::cout << "f(x)= " << f;
			break;
		default:
			std::cerr << "Вы выбрали неверный вариант" << std::endl;
			exit(EXIT_FAILURE);
		}

	y = 2 * a*pow(cos(pow(x, 2)), 3) + pow(sin(pow(x, 3)), 2) - b * f;
	std::cout << "\nОтвет: искомое значение = " << y <<"\n"<< std::endl;
}

void Task3()
{
	int k, day;
	std::cout << "Введите k: ";
	std::cin >> k;
	day = k % 7;
	if (k >= 1 && k <= 365)
	{
		switch (day)
		{
		case 1: std::cout << k <<"ый день - Понедельник\n" << std::endl;
			break;
		case 2: std::cout << k <<"ый день - Вторник\n" << std::endl;
			break;
		case 3: std::cout << k <<"ый день - Среда\n" << std::endl;
			break;
		case 4: std::cout << k <<"ый день - Четверг\n" << std::endl;
			break;
		case 5: std::cout << k <<"ый день - Пятница\n" << std::endl;
			break;
		case 6: std::cout << k <<"ый день - Суббота\n" << std::endl;
			break;
		case 0: std::cout << k <<"ый день - Воскресенье\n" << std::endl;
			break;
		default:
			 std::cout << "Такого дня не бывает" << std::endl;
			break;
		}
	}
}

void Task4()
{
	double x, b, m, n, y ,z;

	std::cout << "Введите x: ";
	std::cin >> x;
	std::cout << "Введите b: ";
	std::cin >> b;
	std::cout << "Введите m: ";
	std::cin >> m;
	z = abs(b*m);
	if (z > pow(x, 2))
	{
		b = -1.6;
		m = 0.9;
		n = -1.4;
		y = sin(b*m + cos(n*x));
	}
	else if (z < pow(x, 2))
	{
		b = 4.5;
		m = -2;
		n = 2.2;
		y = cos(b*m - sin(x));
	}
	else
	{
		b = -4.5;
		m = 0.5;
		n = -1.5;
		y = sqrt(exp(abs(cos(x)))+ sqrt(abs(b*m*x)));
	}
	std::cout << "|b*m| = "<< z << "\ny = " << y << std::endl;
}


int main()
{
	setlocale(LC_CTYPE, "rus");
	system("color 6");
	int key = 0;
	while (key != 5){
		Menu();
		std::cin >> key;
	switch (key)
	{
	case 1: 
		//Задание №1
		Graphic();
		break;
	case 2:
		//Задание №2
		Task2();
		break;
	case 3:
		//Задание №3
		Task3();
		break;
	case 4:
		//Задание №4
		Task4();
		break;
	case 5:
	std::cout << "Выход из программы..." << std::endl;
	exit(EXIT_SUCCESS);
	break;
	default:
		std::cerr << "Вы выбрали неверный пункт меню" << std::endl;
	}
	system("pause");
	system("cls");
	}
	return 0;

}
