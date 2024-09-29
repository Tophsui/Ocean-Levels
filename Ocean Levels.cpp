#include <iostream>
using namespace std;

int main() {
    // Constants
    const double RISE_RATE = 1.5; // Ocean rise rate in mm per year

    // Years to calculate the rise for
    double years[] = { 5, 7, 10 };

    // Output the results
    for (int i = 0; i < 3; i++) {
        double rise = RISE_RATE * years[i];
        cout << "In " << years[i] << " years, the ocean level will rise by "
            << rise << " millimeters." << endl;
    }

    return 0;
}