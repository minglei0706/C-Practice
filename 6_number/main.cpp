#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int number;
    int best = 0; // Luckiest person
    float total;

    cout << "Please enter the total amount of money: ";
    cin >> total;
    cout << "Please enter the number of people: ";
    cin >> number;

    if (number <= 0) {
        cout << "The number of people must be greater than 0." << endl;
        return 1;
    }

    if (total <= 0) {
        cout << "The total amount must be greater than 0." << endl;
        return 1;
    }

    /* Generate random numbers */
    srand(static_cast<unsigned>(time(0)));
    float a[1024] = {0}; // Array to store random numbers, supports up to 1024 people
    float b[1024] = {0}; // Array to store the amount of money each person gets
    float suma = 0; // Sum of random numbers
    float sumb = 0; // Sum of money distributed
    int max = 0;

    for (int i = 0; i < number; i++)
    {
        // Generate actual random numbers
        a[i] = static_cast<float>(rand() % 100);

        if (a[i] > max){
            max = a[i];
            best = i; // Record the luckiest person
        }
        suma += a[i];
    }

    cout << "Press Enter to see the amount of money each person gets..." << endl;
    cin.ignore(); // Ignore the newline character after the last input

    for (int i = 0; i < number - 1; i++)
    {
        cin.get(); // Wait for Enter key
        b[i] = a[i] / suma * total; // Calculate the amount of money each person gets based on the random numbers
        sumb += round(b[i] * 100) / 100.0; // Round to two decimal places
        // Output information
        //setw is used to set the width of the output, fixed and setprecision are used to format the output
        cout << "Person " << setw(3) << i + 1 << " gets: " << setw(6) 
             << fixed << setprecision(2) << round(b[i] * 100) / 100.0 << endl;
    }
    // The amount of money for the last person is the total amount minus the sum of the previous amounts.
    cin.get(); // Wait for Enter key
    float last_red_packet = round((total - sumb) * 100) / 100.0;
    cout << "Person " << setw(3) << number << " gets: " << setw(6) 
         << fixed << setprecision(2) << last_red_packet << endl;

    // Display the luckiest person
    cout << "\nThe luckiest person is: Person " << best + 1 << endl;

    return 0;
}