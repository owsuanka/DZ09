#include <iostream>
#include <string>
#include <Windows.h> 
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int arr[3][3] = { {4,7,8},{5,1,-4},{3,3,1} };
    float sum = { 0.0 };
    float sred = { 0.0 };
    int count = 0;


    cout << "Положительные элементы: ";
    for (size_t i = 0; i < size(arr); i++)
    {
        for (size_t j = 0; j < size(arr); j++)
        {
            if (arr[i][j] >= 0)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;

    cout << "Отрицательные элементы: ";
    for (size_t i = 0; i < size(arr); i++)
    {
        for (size_t j = 0; j < size(arr); j++)
        {
            if (arr[i][j] < 0)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;



    cout << "Четные элементы: ";
    for (size_t i = 0; i < size(arr); i++)
    {
        for (size_t j = 0; j < size(arr); j++)
        {
            if (arr[i][j] % 2 == 0)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
    cout << "Нчетные элементы: ";
    for (size_t i = 0; i < size(arr); i++)
    {
        for (size_t j = 0; j < size(arr); j++)
        {
            if (arr[i][j] % 2 != 0)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;



    for (size_t i = 0; i < size(arr); i++)
    {
        for (size_t j = 0; j < size(arr); j++)
        {
            sum += arr[i][j];
        }

    }
    cout << "Сумма значений элементов: " << sum << endl;



    sum = 0;
    for (size_t i = 0; i < size(arr); i++)
    {
        for (size_t j = 0; j < size(arr); j++)
        {
            sum += arr[i][j];
            count++;
        }

    }

    int sr = sum / count;
    cout << "Ср. значение = " << sr << endl;
}