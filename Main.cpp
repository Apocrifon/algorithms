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
	n = rand() % 6; //случайное n, но ограничил до 20, для удобства
	cout << n << " Size of array" << endl;
	cout << endl;
	//float* array = new float[n];   
	//SetRandValueForFloat(array, n);
	int* array = new int[n];
	SetRandValueForInt(array, n);
	int minIndex = IndexofMinAbsValueInArray(array, n);
	int maxIndex = IndexofMaxAbsValueInArray(array, n);
	leftBoard = (minIndex < maxIndex) ? minIndex : maxIndex;
	rightBoard = (minIndex < maxIndex) ? maxIndex : minIndex;
	WriteElementsOfArray(array, n);
	cout << endl;
	cout << fixed << setprecision(2) << SumOfElements(array, n, ReturnTrue, SearchBoundaries, -1, n+1) << " Sum of positive numbers" <<  endl;
	cout << endl;
	cout << leftBoard << " " << rightBoard << endl;
		cout << fixed << setprecision(2) << MultiplicationOfElements(array, n, ReturnTrue, SearchBoundaries,leftBoard, rightBoard) << " Multiplication" << endl;
		cout << endl;
	BubbleSort(array, n);
	Reverse(array, n);
	WriteElementsOfArray(array, n);
	delete [] array;

}