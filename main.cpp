#include <iostream>
#include <cmath>
using namespace std;
double f(double x,double &fx){
    fx=x*x*cos(x)+1;
    return fx;
}

int main() {
   double a=0, b=0, x=0, fx, err;
    while (f(a, fx) * f(b, fx) >= 0) {
        cout << "inserire estremi" << endl;
        cin >> a >> b;
        if (f(a, fx) * f(b, fx) < 0) {
            break;
        }
    }
    while (f(x,fx) != 0) {
        x = (a + b) / 2;

        if (f(a, fx) * f(b, fx) < 0) {
            a = x;
        } else {
            b = x;
        }
        err = abs((b - a)) / 2;
        if (err < 1e-6) {
            break;
        }
    }
    cout << x << endl;

   return 0;
}
