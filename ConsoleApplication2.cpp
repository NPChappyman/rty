// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    
}
static void InsertionSort(int* a,int len)
{
    for (int i = 0; i < len-1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (a[i] > a[j])
            {
                Swap(&a[i], &a[j]);
            }
        }
    }
}
void Swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}