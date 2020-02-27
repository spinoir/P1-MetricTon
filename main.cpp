//Metric Ton
#include <iostream>
using namespace std;
int main() {
    double cerealWeight, convertedWeight, boxCount;
    double metricTon = 35273.92;
    cout << "How many ounces of cereal are in the box?\n";
    cin >> cerealWeight;
    convertedWeight = cerealWeight/metricTon;
    boxCount = metricTon/cerealWeight;
    cout << "The cereal box weighs ";
    cout << convertedWeight;
    cout << " metric tons. It would take ";
    cout << boxCount;
    cout << " boxes to make up one metric ton of cereal.";
    return 0;
}
