/* Sample C++ code */
#include <iostream>
#define pi 3.14
using namespace std;
int main() {
    float a,b,r;
    cout<<"Enter radius";
    cin >> r;
    a=2*pi*r;
    b=pi*r*r;
    cout << "\nPerimeter is:"<< a << "\n Area is:" << b;
    return 0;
};