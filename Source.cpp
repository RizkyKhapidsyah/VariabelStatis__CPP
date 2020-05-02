#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

void Contoh_Biasa() {
	int X = 0;
	
	X = X + 1;
	cout << "X Biasa = " << X << endl;
}

void Contoh_Statis() {
	int X = 0;

	X = X + 1;
	cout << "X Statis = " << X << endl;
}

int main() {
	for (int i = 0; i <= 2; i++)
	{
		Contoh_Biasa();
	}

	puts("");

	for (int i = 0; i <= 2; i++)
	{
		Contoh_Statis();
	}

	_getch();
	return 0;
}