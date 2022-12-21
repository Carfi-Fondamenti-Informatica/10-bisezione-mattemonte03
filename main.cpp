#include <iostream>
#include <cmath>
using namespace std;
double f(double y , double &fy)
{
    fy = y * y * cos(y) + 1;
    return fy;
}

int main() {
double a=0,b=0,fx=0,x=0,err=2;
int g=0;
while(f(a,fy)*f(b,fy)>=0) {
    cout <<"inserire estremi"<<endl;
    cin >> a >> b;

    if (f(a,fy)*f(b,fy) < 0){
        break;
    }
}

while (f(x,fy)!=0) {
    x=(a+b)/2;
        if (f(a, fy) * f(b, fy) < 0) {
            a = y;
        }
        else{
        b = y;
        }
    err = abs((a - b)) / 2;
        if (err < 1e-6){
            break;}
}

y=y*10000;
y=(int)y;
y=y/10000;
cout<< y;




return 0;



}
