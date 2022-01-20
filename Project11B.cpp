#include <iostream>
#include <iomanip>
using namespace std;

enum Pet { DOG, CAT, BIRD, HAMSTER };

// Function prototype
void displayPetName(Pet);

int main()
{
    const int NUM_PETS = 4;         // The number of pets
    int sold[NUM_PETS];             // To hold amount sold for each pet
    int total = 0;                  // Accumulator
    Pet petType;                    // Loop counter

    // Get the amount sold for each pet.
    for (petType = DOG; petType <= HAMSTER; petType = static_cast<Pet>(petType + 1))
    {
        cout << "Enter the number of ";
        displayPetName(petType);
        cout << ": ";
        cin >> sold[petType];
    }

    // Calculate the total of pets sold.
    for (petType = DOG; petType <= HAMSTER; petType = static_cast<Pet>(petType + 1))
    {
        total += sold[petType];
    }

    // Display the total of pets sold.
    cout << "The total number of pets sold is " << setprecision(2) << fixed << total << endl;

    system("pause");
    return 0;
}

//**********************************************************
// Definition of the displayPetName function:              *
// This function accepts an argument of the pet type and   *
// displays the corresponding name of the pet.             *
//**********************************************************

void displayPetName(Pet p)
{
    switch (p)
    {
    case DOG:   cout << "dogs sold";
        break;
    case CAT:   cout << "cats sold";
        break;
    case BIRD:   cout << "birds sold";
        break;
    case HAMSTER:   cout << "hamsters sold";
    }
}
