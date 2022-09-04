#include "Funk.h"


using namespace std;



int main()
{
	srand(time(NULL));
	int n = rand() % 21;; //случайное n, но ограничил до 20 для удобства
	cout << n << endl;
	float* array = SetRandValueForFloat(5);
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << endl;
	}
	float sumOfPossitiveNumber = SumOfElements(array, n, positive);
	cout << sumOfPossitiveNumber << "Sum of Positive Numbers" <<  endl;


}