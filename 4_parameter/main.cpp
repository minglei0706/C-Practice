#include <iostream>
#include <string>

using namespace std;

#define LENGTH 100
#define WIDTH 200
#define HEIGHT 300

int main() {
    
    const int Number_of_box = 5;
    const char NEWLINE = '\n';

    cout << "hello \t world, \n I'm Ming, \
            I come from China. ";
    cout << "\n";

    int roof_area = LENGTH * WIDTH;
    int volume = roof_area * HEIGHT;
    int total_volume = volume * Number_of_box;

    cout << "The total volume of " << Number_of_box << " boxes is " << total_volume << " cubic meters." << NEWLINE;

    return 0;
}