#include "Funk.h"


using namespace std;



int main()
{
	srand(time(NULL));
	int n; 
	float* array;
	int leftBoard;
	int rightBoard;
	float multiplication;
	n = rand() % 21; //случайное n, но ограничил до 20, для удобства
	cout << n << " Size of array" << endl;
	cout << endl;
	array = new float[n];
	SetRandValueForFloat(array, n);
	int minIndex = IndexofMinAbsValueInArray(array, n);
	int maxIndex = IndexofMaxAbsValueInArray(array, n);
	leftBoard = (minIndex < maxIndex) ? minIndex : maxIndex;
	rightBoard = (minIndex < maxIndex) ? maxIndex : minIndex;
	WriteElementsOfArray(array, n);
	cout << endl;
	float sumOfPossitiveNumber = SumOfElements(array, n, positive, 0 , n);
	cout << sumOfPossitiveNumber << " Sum of Positive Numbers" <<  endl;
	cout << endl;
	multiplication= MultiplicationOfElements(array, n, null, leftBoard, rightBoard);
	cout << multiplication << " Multiplication" << endl;
	cout << endl;
	BubbleSort(array, n);
	Reverse(array, n);
	WriteElementsOfArray(array, n);
	delete [] array;

}