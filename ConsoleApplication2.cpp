// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
void Swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
static void InsertionSort(int* a, int len)
{
    for (int i = 0; i < len - 1; i++)
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

void print(int* a, int len)
{
    for (int i = 0; i < len; i++)
    {
        std::cout << a[i] << " ";
    }
}
int main()
{
    int a[] = {1,22,1231,13132,212,17,12,7,45,32};
    InsertionSort(a,10);
    print(a,10);
}
