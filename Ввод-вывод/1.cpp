﻿#include<iostream> //включение директивы препроцессора для использования потоков ввода и вывода
using namespace std; //определение стандартного пространства имен
int main() {
	setlocale(LC_ALL, "Russian"); //русский язык
	double a, b; //переменные с плавающей точкой
	cout << "Введите первое число: ";
	cin >> a; //ввод первого числа
	cout << "Введите второе число: ";
	cin >> b; //ввод второго числа
	cout << "Ответ: " << a * b;
} 