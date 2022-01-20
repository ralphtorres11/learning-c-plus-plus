// This program demonstrates the Selection Sort algorithm
#include <iostream> 
#include <string> 
using namespace std;

//Function protoypes
void selectionSort(string[], int);
void swap(string &, string &);

int main() 
{
    const int SIZE = 10;

    //Array of unsorted names
    string names[SIZE] = { "Amazon", "Tesla", "Apple", "Visa", "Alphabet", "Marvell", "Microsoft", "Salesforce", "Facebook", "Nvidia" };

    //Display the unsorted array
    cout << "The unsorted names:" << endl;
    for (auto element : names)
        cout << element << endl;
    cout << endl;

    //Sort the array
    selectionSort(names, SIZE);

    //Display the sorted array
    cout << "The sorted names:" << endl;
    for (auto element : names)
        cout << element << endl;
    cout << endl;

    return 0;
}

//The selectionSort function sorts a string array in alphabetical order
void selectionSort(string array[], int arraySIZE)
{
    int minIndex;
    string minValue;

    for (int start = 0; start < (arraySIZE - 1); start++)
    {
        minIndex = start;
        minValue = array[start];

        for (int index = start + 1; index < arraySIZE; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        swap(array[minIndex], array[start]);
    }
}

//The swap function swaps a and b in memory
void swap(string &a, string &b)
{
    string temp = a;
    a = b;
    b = temp;
}