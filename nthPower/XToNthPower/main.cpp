#include <iostream>

using namespace std;

int fun1Cnts = 0;
int funCnts = 0;

int fun(int x, int n) {
    if (n == 0) {
        return 1;
    }
    cout << "    x=  " << x << "                      n= " << n << "                     计数= " << ++funCnts << endl;
    if (n % 2 == 1) {
        return fun(x, n / 2) * fun(x, n / 2) * x;
    }
    return fun(x, n / 2) * fun(x, n / 2);
}
int fun1(int x, int n) {
    cout << "    x= " << x << "                      n= " << n << endl;
    if (n == 0) {
        return 1;
    }
    int t = fun1(x, n / 2);
    cout << "    t= " << t << "                      x=  " << x << "                      n= " << n
         << "                     计数= " << ++fun1Cnts << endl;
    if (n % 2 == 1) {
        return t * t * x;
    }
    return t * t;
}
int main() {
    cout << "cal  fun1----------------------" << endl;
    int t1 = fun1(2, 6);
    cout << "cal  fun1---------------------- " << endl << "2^6=" << t1 << endl;

    cout << "cal  fun----------------------" << endl;
    int t = fun(2, 6);
    cout << "cal  fun---------------------- " << endl << "2^6=" << t << endl;
}
