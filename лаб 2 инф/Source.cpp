#include <iostream>
#include <clocale>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	setlocale(LC_ALL, ".UTF8");

	cout << "Hello World" << endl;
	cout << "Изменение в текстовой ветке" << endl;

	return 0;
}