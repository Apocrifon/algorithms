#pragma once
#include <iostream>
#include <ctime>
#include <stdio.h>
#include <fstream>

enum conditions
{
    positive,
    negative,
    zero,
    multiple
};

using namespace std;

int* SetRandValueForInt(int size);

float* SetRandValueForFloat(int size);

float CalculateSumOfElem(int array[], int size, conditions condition);

float CalculateSumOfElem(float array[], int size, conditions condition);

bool PredInRange(int index, int firstIndex, int lastIndex);

float CalculateMultiplicationOfElem(int array[], int size, conditions condition);

float CalculateMultiplicationOfElem(float array[], int size, conditions condition);

int* DeleteElem(int* array, int size, int index);

float* DeleteElem(float* array, int size, int index);

int* AddNewElem(int* array, int size, int index, int newElem);

float* AddNewElem(float* array, int size, int index, int newElem);

void BubbleSort(int* array, int size);

void BubbleSort(float* array, int size);

void SelectSort(int* array, int size);

void SelectSort(float* array, int size);

void InsertSort(int* array, int size);

void InsertSort(float* array, int size);

int LinearSearch(int* array, int size, int key);

int LinearSearch(float* array, int size, int key);

int BinarySearch(int* array, int size, int key);

int BinarySearch(float* array, int size, int key);

bool IsPositiveNumber(int a);

bool IsPositiveNumber(float a);

bool IsNegativenumber(int a);

bool IsNegativenumber(float a);

bool IsZeroNumber(int a);

bool IsZeroNumber(float a);

bool IsMultipleOfNumber(int number, int divider);

bool IsMultipleOfNumber(float number, int divider);

int CounterOfNumberOfElem(int* array, int size, conditions condition);

int CounterOfNumberOfElem(float* array, int size, conditions condition);

void ReadElementsOfArray(int* array, int size);

void ReadElementsOfArray(float* array, int size);  /*REWRITE*/

void WriteElementsOfArray(int* array, int size);

void WriteElementsOfArray(float* array, int size);

void WriteInfoInFile(string path);

int* SetRandValueForInt(int size)
{
    int* array = new int[size];
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        array[i] = -10000 + rand() % (20001);
    }
    return array;
}

float* SetRandValueForFloat(int size)
{
    float* array = new float[size];
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        array[i] = (double)(rand()) / RAND_MAX * (10000 - (-9999)) + (-9999);
    }
    return array;
}

float CalculateSumOfElem(int array[], int size, conditions condition)
{
    long long result = 0;
    for (int i = 0; i < size; i++)
    {
        if ()
            result += array[i];
    }
    return result;
}

float CalculateSumOfElem(float array[], int size, conditions condition)
{
    long float result = 0;
    for (int i = 0; i < size; i++)
    {
        if ()
            result += array[i];
    }
    return result;
}

bool PredInRange(int index, int firstIndex, int lastIndex)
{
    return index >= firstIndex - 1 && index <= lastIndex - 1;
}

float CalculateMultiplicationOfElem(float array[], int size, conditions condition)
{
    long float result = 1;
    for (int i = 0; i < size; i++)
    {
        if ()
            result *= array[i];
    }
    return result;
}

float CalculateMultiplicationOfElem(int array[], int size, conditions condition)
{
    long float result = 1;
    for (int i = 0; i < size; i++)
    {
        if ()
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

bool IsPositiveNumber(int a)
{
    return a > 0;
}

bool IsPositiveNumber(float a)
{
    return a > 0;
}

bool IsNegativenumber(int a)
{
    return a < 0;
}

bool IsNegativenumber(float a)
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

int CounterOfNumberOfElem(int* array, int size, conditions condition)
{
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if ()
            counter++;
    }
    return counter;
}

int CounterOfNumberOfElem(float* array, int size, conditions condition)
{
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if ()
            counter++;
    }
    return counter;
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
        printf_s("%d \n", value);
    }
}

void WriteElementsOfArray(float* array, int size)
{
    float value;
    for (int i = 0; i < size; i++)
    {
        value = array[i];
        printf_s("%f \n", value);
    }
}

//void WriteInfoInFile(string path)
//{
//    ifstream fin(path);
//    ofstream fout(path);
//}