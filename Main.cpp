#include "Funk.h"

using namespace std;

int main()
{
	srand(time(NULL));
	cout.setf(ios::fixed);
	int n; 
	//float* array;
	int leftBoard;
	int rightBoard;
	float multiplication;
	n = rand() % 20; //случайное n, но ограничил до 20, для удобства
	cout << n << " Size of array" << endl;
	cout << endl;
	float* array = new float[n];   
	SetRandValueForFloat(array, n);
	int minIndex = IndexofMinAbsValueInArray(array, n);
	int maxIndex = IndexofMaxAbsValueInArray(array, n);
	leftBoard = (minIndex < maxIndex) ? minIndex : maxIndex;
	rightBoard = (minIndex < maxIndex) ? maxIndex : minIndex;
	WriteElementsOfArray(array, n);
	cout << endl;
	cout << fixed << setprecision(2) << SumOfElements(array, n, positive, -1, n+1) << " Sum of positive numbers" <<  endl;
	cout << endl;
	cout << fixed << setprecision(2) << MultiplicationOfElements(array, n, null, leftBoard, rightBoard) << " Multiplication" << endl;
	cout << endl;
	BubbleSort(array, n);
	Reverse(array, n);
	WriteElementsOfArray(array, n);
	delete [] array;

}