#pragma once
#include <iostream>
#include <ctime>
#include <stdio.h>
#include <fstream>
#include <math.h>
#include <string>
#include <iomanip>

using namespace std;

bool IsPositiveNumber(int a)
{
    return a > 0;
}

bool IsPositiveNumber(float a)
{
    return a > 0;
}

bool IsNegativeNumber(int a)
{
    return a < 0;
}

bool IsNegativeNumber(float a)
{
    return a < 0;
}

bool IsZeroNumber(int a)
{
    return a == 0;
}

bool IsZeroNumber(float a)
{
    return a == 0;
}

bool IsMultipleOfNumber(int number, int divider)
{
    if (divider == 0)
    {
        return false;
        //throw "Division by zero condition!";
    }
    return number / divider * divider == number;
}

bool IsMultipleOfNumber(float number, int divider)
{
    if (divider == 0)
    {
        return false;
        //throw "Division by zero condition!";
    }
    return number / divider == (int)number / divider;
}

bool SearchBoundaries(int index, int firstIndex, int lastIndex)
{
    return index > firstIndex && index < lastIndex;
}

bool ReturnTrue(float a)
{
    return true;
}


void SetRandValueForInt(int* array, int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        array[i] = -10000 + rand() % (20001);
    }
}

void SetRandValueForFloat(float* array, int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {          
        array[i] = (double)(rand()) / RAND_MAX * (2000) - 1000;
    }
}

int SumOfElements(int array[], int size, bool (*conditionalTypeofNumber)(float), bool (*IsNumberinBoards)(int, int, int), int leftBoard, int rightBoard)
{
   int result = 0;
    for (int i = 0; i < size; i++)
    {
        if ((*IsNumberinBoards)(i, leftBoard, rightBoard) && (*conditionalTypeofNumber)(array[i]))
            result += array[i];
    }
    return result;
}

float SumOfElements(float array[], int size, bool (*conditionalTypeofNumber)(float), bool (*IsNumberinBoards)(int, int, int), int leftBoard, int rightBoard)
{
    float result = 0;
    for (int i = 0; i < size; i++)
    {
        if ((*IsNumberinBoards)(i, leftBoard, rightBoard) && (*conditionalTypeofNumber)(array[i]))
            result += array[i];
    }
    return result;
}

int MultiplicationOfElements(int array[], int size, bool (*conditionalTypeofNumber)(float), bool (*IsNumberinBoards)(int, int, int), int leftBoard, int rightBoard)
{
    int result = 1;
    if (rightBoard - leftBoard<1)
        return 0;
    for (int i = 0; i < size; i++)
    {
        if ((*IsNumberinBoards)(i, leftBoard, rightBoard))
            result *= array[i];

    }
    return result;
}

float MultiplicationOfElements(float array[], int size, bool (*conditionalTypeofNumber)(float), bool(*IsNumberinBoards)(int, int, int), int leftBoard, int rightBoard)
{
    float result = 1;
    if (rightBoard - leftBoard<1)
        return 0;
    for (int i = 0; i < size; i++)
    {
        if ((*IsNumberinBoards)(i, leftBoard, rightBoard) && (*conditionalTypeofNumber)(array[i]))
            result *= array[i];

    }
    return result;
}

int* DeleteElem(int* array, int size, int index) // returned array's length=size-1
{
    int step = 0;
    int* newArray = new int[size - 1];
    for (int i = 0; i < size - 1; i++)
    {
        if (i == index - 1)
            step = 1;
        newArray[i] = array[i + step];
    }
    return newArray;
}

float* DeleteElem(float* array, int size, int index) // returned array's length=size-1
{
    int step = 0;
    float* newArray = new float[size - 1];
    for (int i = 0; i < size - 1; i++)
    {
        if (i == index - 1)
            step = 1;
        newArray[i] = array[i + step];
        return newArray;
    }
}

int* AddNewElem(int* array, int size, int index, int newElem) // returned array's length=size+1
{
    int step = 0;
    int indexElem;
    int* newArray = new int[size + 1];

    for (int i = 0; i < size; i++)
    {
        if (i == index - 1)
        {
            step = 1;
            newArray[i] = newElem;
        }
        newArray[i + step] = array[i];
    }
    return newArray;
}

float* AddNewElem(float* array, int size, int index, int newElem) // returned array's length=size+1
{
    int step = 0;
    float* newArray = new float[size + 1];
    for (int i = 0; i < size; i++)
    {
        if (i == index - 1)
        {
            step = 1;
            newArray[i] = newElem;
        }
        newArray[i + step] = array[i];
    }
    return newArray;
}

void BubbleSort(int* array, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j + 1] < array[j])
                swap(array[j], array[j + 1]);
        }
    }
}

void BubbleSort(float* array, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        { 
            if (array[j + 1] < array[j])
                swap(array[j], array[j + 1]);
        }
    }
}

void SelectSort(int* array, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[minIndex])
                minIndex = j;
        }
        if (minIndex != i)
        {
            swap(array[i], array[minIndex]);
        }
    }
}

void SelectSort(float* array, int size)
{
    for (int i = array[0]; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            swap(array[i], array[minIndex]);
        }
    }
}

void InsertSort(int* array, int size)
{
    int temp;
    int index;
    for (int i = 1; i < size; i++)
    {
        temp = array[i];
        index = i - 1;
        while (index >= 0 && array[index] > temp)
        {
            array[index + 1] = array[index];
            array[index] = temp;
            index--;
        }
    }
}

void InsertSort(float* array, int size)
{
    int temp;
    int index;
    for (int i = 1; i < size; i++)
    {
        temp = array[i];
        index = i - 1;
        while (index >= 0 && array[index] > temp)
        {
            array[index + 1] = array[index];
            array[index] = temp;
            index--;
        }
    }
}

int LinearSearch(int* array, int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
            return i;
    }
    return -1;
}

int LinearSearch(float* array, int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
            return i;
    }
    return -1;
}

int BinarySearch(int* array, int size, int key)
{
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        int middle = left + (right - left) / 2;
        if (array[middle] >= key)
            right = middle;
        else left = middle + 1;
    }
    if (array[right] == key)
        return right;
    return -1;
}

int BinarySearch(float* array, int size, int key)
{
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        int middle = left + (right - left) / 2;
        if (array[middle] >= key)
            right = middle;
        else left = middle + 1;
    }
    if (array[right] == key)
        return right;
    return -1;
}

void Reverse(int* array, int size)
{
    for (int i = 0, j= size-1; i<j ; i++,j--)
    {
        swap(array[i], array[j]);
    }
}

void Reverse(float* array, int size)
{
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        swap(array[i], array[j]);
    }
}



int CounterOfNumberOfElem(int* array, int size, bool (*conditionalTypeofNumber)(int))
{
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if ((*conditionalTypeofNumber)(array[i]))
            counter++;
    }
    return counter;
}

int CounterOfNumberOfElem(float* array, int size, bool (*conditionalTypeofNumber)(float))
{
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if ((*conditionalTypeofNumber)(array[i]))
            counter++;
    }
    return counter;
}

int IndexofMinAbsValueInArray(int* array, int size)
{
    int index = 0;
    int result = abs(array[0]);
    for (size_t i = 0; i < size; i++)
    {
        if (abs(array[i]) < result)
        {
            result = abs(array[i]);
            index = i;
        }
    }
    return index;
}

int IndexofMinAbsValueInArray(float* array, int size)
{
    int index = 0;
    float result = abs(array[0]);
    for (size_t i = 0; i < size; i++)
    {
        if (abs(array[i]) < result)
        {
            result = abs(array[i]);
            index = i;
        }
    }
    return index;
}

int IndexofMaxAbsValueInArray(int* array, int size)
{
    int index = 0;
    int result =abs(array[0]);
    for (size_t i = 1; i < size; i++)
    {
        if (abs(array[i]) > result)
        {
            result = abs(array[i]);
            index = i;
        }
    }
    return index;
}

float IndexofMaxAbsValueInArray(float* array, int size)
{
    int index = 0;
    float result = abs(array[0]);
    for (size_t i = 1; i < size; i++)
    {
        if (abs(array[i]) > result)
        {
            result = abs(array[i]);
            index = i;
        }
    }
    return index;
}

void ReadElementsOfArray(int* array, int size)
{
    int value;
    for (int i = 0; i < size; i++)
    {
        scanf_s("%d", &value);
        array[i] = value;
    }
}

void ReadElementsOfArray(float* array, int size)
{
    float value;
    for (int i = 0; i < size; i++)
    {
        scanf_s("%f", &value);
        array[i] = value;
    }
}

void WriteElementsOfArray(int* array, int size)
{
    int value;
    for (int i = 0; i < size; i++)
    {
        value = array[i];
        printf_s("%.2d \n", value);
    }
}

void WriteElementsOfArray(float* array, int size)
{
    float value;
    for (int i = 0; i < size; i++)
    {
        value = array[i];
        printf_s("%.2f \n", value);
    }
}

void WriteInfoInFile(float* array, string path, int size)
{

    ofstream out;
    out.open(path);
    if (out.is_open())
    {
        for (int i = 0; i < size; i++)
        {
            out << array[i] << endl;
        }
    }
    out.close();
}

void ReadInfoFromFile(float* array, string path, int size)
{
    string line;    
    ifstream in(path);
    if (in.is_open())
    {
        for (int i = 0; i < size; i++)
        {
            getline(in, line);
            double number = atof(line.c_str());
            array[i] = number;
        }
    }
    in.close();
}