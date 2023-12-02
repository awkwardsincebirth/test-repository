/* Sample C++ code */
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int x1,x2,y1,y2;
    float d;
    cout << "Enter first points:";
    cin >> x1 >> y1;
    cout << "\nEnter second points:";
    cin >> x2 >> y2;
    d=(sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));
    cout << "\n The distance is:"<< d;
    return 0;
};