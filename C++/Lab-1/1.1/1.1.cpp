#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int processArray(float* arr, int len, int A, int B) {
	cout << endl;
	// ���������� ���������� ��������� �������
	int amount = 0;
	// �������� �������� ������� �� ��������� �����
	srand(time(0));
	for (int i = 0; i < len; i++)
		if (i % 2 == 0) { // ���� ������ ������
			int R = (rand() % (abs(A) + B + 1)) - A;
			arr[i] *= R;
		}
	// ���������� ���������� � ������� ���������� �����
	bool* suitable = new bool[len];
	for (int i = 0; i < len; i++) {
		if (abs(arr[i]) >= 10 && abs(arr[i]) < 100) { // ���� ����������
			suitable[i] = true;
			amount++;
		}
		else {
			suitable[i] = false;
		}
	}
	// ��������� �������� ������
	float* finalArray = new float[amount];
	int j = 0;
	for (int i = 0; i < len; i++) {
		if (suitable[i] == true) {
			finalArray[j] = arr[i];
			j++;
		}
	}
	// ������� �������� ������
	setlocale(LC_ALL, "Russian");//������� ���� � �������
	cout << "�������� ������ : [";
	for (int i = 0; i < amount; i++) {
		cout << finalArray[i] << " ";
	}
	cout << "]";
	cout << endl;

	return amount;
}
int main()
{
	float primaryArray[15] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };//������������� ���������
	int A, B;
	setlocale(LC_ALL, "Russian");//������� ���� � �������
	cout << "������� ��� �����(A < 0, B > 0)\n";
	cout << "A = -";
	cin >> A;
	cout << "B = ";
	cin >> B;
	cout << "\n";
	cout << "����� ������� : " << processArray(primaryArray, 15, A, B);
}