#include "Funk.h"


using namespace std;



int main()
{
	srand(time(NULL));
	int n = rand() % 21;; //��������� n, �� ��������� �� 20 ��� ��������
	cout << n << endl;
	float* array = SetRandValueForFloat(n);
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << endl;
	}
	int sumOfPossitiveNumber;


}