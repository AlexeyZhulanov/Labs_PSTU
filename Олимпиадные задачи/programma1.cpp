#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int g,n = 5;
	string s;
	cout << "Введите 3-х значное число без повторяющихся цифр: ";
	cin >> s;
	int a[3]{(char(s[0]) - 48),(char(s[1]) - 48),(char(s[2]) - 48)}; 
	while ((a[0] > a[1]) || (a[1] > a[2])){
		int x;
		if (a[0] > a[1]) {x = a[0]; a[0] = a[1]; a[1] = x;}
		if (a[1] > a[2]) {x = a[1]; a[1] = a[2]; a[2] = x;}
	}
	for (int i = 2; i >= 0; i--) {
		for (int j = 2; j >= 0; j--) {
			for (int k = 2; k >= 0; k--) {
				if ((a[i] != a[j]) && (a[i] != a[k]) && (a[j] != a[k])) {
				g = a[i] * 100 + a[j] * 10 + a[k];
				if (n == 5) { n = 1; cout << "Max: " << g << endl; }
				if (n == 1) { cout << g << endl; }
				}
			}
		}
	} 
} 