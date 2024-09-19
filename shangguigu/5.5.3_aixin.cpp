#include <iostream>
#include <Kernel/math.h>
using namespace std;

int main(){
    // 方程(x^2, y^2 + a)^3 -x^2 * y^3 = 0

    double a = 1;
    double bound = 1.3 * sqrt(a);
    double step = 0.05;
    for (double y = bound; y >= -bound; y -= step){
        for (double x = -bound; x <= bound; x += 0.5 * step){
            double result = pow( (pow(x, 2) + pow(y, 2) - a), 3) - pow(x, 2) * pow(y, 3);
            if (result <= 0)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}