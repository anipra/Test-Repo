#include <iostream>
#include <string>

using namespace std;

void bubble_sort(int *array, int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(array[j] < array[i])
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
}

void insertion_sort(int *array, int size)
{
    for(int i = 1; i < size; i++)
    {
        int j = i;
        while(j > 0 && array[j-1] > array[j])
        {
            int temp = array[j-1];
            array[j-1] = array[j];
            array[j] = temp;
            j--;
        }
    }
}

void selection_sort(int *array, int size)
{
    for(int i = 0; i < size; i++)
    {
        int min = i;
        for(int j = i+1; j < size; j++)
        {
            if(array[j] < array[min])
            {
                min = j;
            }
        }
        int temp = array[min];
        array[min] = array[i];
        array[i] = temp;
    }
}

int main()
{
	int array[10] = {1,6,4,654,8,83,468,2,78,36};
	int size = 10;
	//bubble_sort(array, size);
	//insertion_sort(array, size);
	selection_sort(array, size);
	for(int i = 0; i < size; i++)
	    cout << array[i] << endl;
	return 0;
}