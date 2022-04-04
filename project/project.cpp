

#include <iostream>
using namespace std;

int main()
{
	cout << "Enter A and B: ";
	double a, b;
	cin >> a >> b;
	cout << "A + B = " << a + b << '\n';
	cout << "A - B = " << a - b << '\n';
	cout << "A * B = " << a * b << '\n';
	cout << "A / B = " << a / b << '\n';
<<<<<<< HEAD
	if (a > b){
=======
	if (a < b) {
>>>>>>> e507b8a (code: добавление вывода минимума)
		cout << a;
	}
	else {
		cout << b;
	}
}

