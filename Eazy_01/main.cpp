#include <iostream>


#include <cmath>
using namespace std;
//---------------------Функции и Прототипы---------------------------------------





//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");

	//-------------------------------САМА ПРОГА-------------------------------------

	int size;                                // число Х , он же размер массивов
	float y = 0;

	cout << "Введите колличество иксов: ";
	cin >> size;

	float* arrx = new float[size];
	float* arrz = new float[size];
	float* arrb = new float[size];
	float* arra = new float[size];
	float* arrBet = new float[size];

	for (int i = 0; i < size; i++)
	{

		cout << endl << "Введите значения Z, B, A, Betta для Х" << i + 1 << endl << endl;
		
		cout << "Z = ";
		cin >> arrz[i];

		cout << "B = ";
		cin >> arrb[i];

		cout << "A = ";
		cin >> arra[i];

		cout << "Betta = ";
		cin >> arrBet[i];

	}

	for (int i = 0; i < size; i++)
	{
		arrx[i] = pow(arrz[i], 3) - arrb[i] + pow(arra[i], 2) / pow(tan(arrBet[i]), 2);
	}


	for (int i = 0; i < size; i++)
	{
		y = y + arrx[i];
	}

	cout << endl << endl << "Y = " << y << endl;


	delete[] arrx;
	delete[] arrz;
	delete[] arrb;
	delete[] arra;
	delete[] arrBet;

	system("pause");

	return 0;
}
