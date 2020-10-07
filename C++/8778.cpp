#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int processArray(float* arr, int len, int A, int B) {
	cout << endl;
	// количество подходящих элементов массива
	int amount = 0;
	// умножаем элементы массива на случайные числа
	srand(time(0));
	for (int i = 0; i < len; i++)
		if (i % 2 == 0) { // если четный индекс
			int R = (rand() % (abs(A) + B + 1)) - A;
			arr[i] *= R;
		}
	// определяем количество и позиции двузначных чисел
	bool* suitable = new bool[len];
	for (int i = 0; i < len; i++) {
		if (abs(arr[i]) >= 10 && abs(arr[i]) < 100) { // если двузначное
			suitable[i] = true;
			amount++;
		}
		else {
			suitable[i] = false;
		}
	}
	// формируем конечный массив
	float* finalArray = new float[amount];
	int j = 0;
	for (int i = 0; i < len; i++) {
		if (suitable[i] == true) {
			finalArray[j] = arr[i];
			j++;
		}
	}
	// выводим конечный массив
	setlocale(LC_ALL, "Russian");//Русский язык в консоли
	cout << "Конечный массив : [";
	for (int i = 0; i < amount; i++) {
		cout << finalArray[i] << " ";
	}
	cout << "]";
	cout << endl;

	return amount;
}
int main()
{
	float primaryArray[15] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };//инициализация единицами
	int A, B;
	setlocale(LC_ALL, "Russian");//Русский язык в консоли
	cout << "Введите два числа(A < 0, B > 0)\n";
	cout << "A = -";
	cin >> A;
	cout << "B = ";
	cin >> B;
	cout << "\n";
	cout << "Длина массива : " << processArray(primaryArray, 15, A, B);
}