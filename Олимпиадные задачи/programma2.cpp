#include <iostream>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int rnumb = rand() % 100;
	int n, f = 5;
	for (int i = 1; i <= 7; i++) {
		if (f == 5) {
			cout << "Введите число: ";
			cin >> n;
			if (rnumb > n) {
				cout << "Загаданное число больше введенного" << endl;
				cout << "Осталось попыток: " << 7 - i << endl;
			}
			if (rnumb < n) {
				cout << "Загаданное число меньше введенного" << endl;
				cout << "Осталось попыток: " << 7 - i << endl;
			}
			if (rnumb == n) {
				f = 4;
				cout << "Вы угадали!";
			}
		}
	}
	if (f == 5) {
		cout << "Вы не угадали" << endl;
		cout << "Загаданное число: " << rnumb;
	}
}