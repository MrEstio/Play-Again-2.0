#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	char again;
	do
	{
		cout << "\n** ������� � ������������� ���� **";
		cout << "\n������ ���� ������ ? (n/y): ";
		cin >> again;
	} while (again == 'y');
	cout << "\nOkey,bye bye";
	return 0;
}