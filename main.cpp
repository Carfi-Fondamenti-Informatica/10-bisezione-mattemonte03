#include <iostream>
#include <cmath>
using namespace std;

double f ( double x, double &fx){
fx=pow(x, 2)*cos(x) + 1;
    return fx;
}

int main() {
double a=0, b=0,err=0, x=0, fx=0;

do {
    cout << "inserire estremi"<< endl;
    cin >> a >> b ;
} while (f(a, fx)*f(b, fx)>=0);

do {
    if ( f(x, fx)!=0) {
        x = (a + b) / 2;
        if (f(x, fx) * f(b, fx) < 0) {
            a = x;
        } else {
            b = x;
        }
        err = abs((b - a) / 2);
    }
} while ( err >= 0.000001);

x=x*10000;
x=(int)x;
x=x/10000;

cout << x << endl;

return 0;
}
