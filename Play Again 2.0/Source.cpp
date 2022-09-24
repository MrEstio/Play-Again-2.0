#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	char again;
	do
	{
		cout << "\n** Поиграл в увлекательную игру **";
		cout << "\nНачать игру заново ? (n/y): ";
		cin >> again;
	} while (again == 'y');
	cout << "\nOkey,bye bye";
	return 0;
}