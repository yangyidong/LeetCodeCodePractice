#include <iostream>

using namespace std;

int cnts = 0;
int cnts1 = 0;
int cnts2 = 0;
// O(n)的递归实现
int fibonacci(int first, int second, int n) {
    //    cout << "    first=" << first << "    second=" << second << "    n=" << n << endl;
    ++cnts;
    if (n == 0) {
        return 0;
    }
    if (n < 3) {
        return 1;
    } else if (n == 3) {
        return first + second;
    } else {
        return fibonacci(second, first + second, n - 1);
    }
}
// O(2^n)的递归实现
int fibonacci1(int n) {
    ++cnts1;
    //    cout << "    n=" << n << endl;
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci1(n - 1) + fibonacci1(n - 2);
}
// O(n)的实现
int fibonacci2(int n) {
    int first = 1;
    int second = 1;
    int temp = 0;
    for (int i = 2; i < n; i++) {
        ++cnts2;
        temp = first + second;
        first = second;
        second = temp;
    }
    return temp;
}

int main() {
    cout << "        fibonacci        " << endl;
    cout << "------------------------" << endl;
    int v = fibonacci(1, 1, 7);
    cout << "    结果" << v << "    cnts " << cnts << endl;
    cout << "------------------------" << endl;

    cout << "        fibonacci1        " << endl;
    cout << "------------------------" << endl;
    int v1 = fibonacci1(7);
    cout << "    结果" << v1 << "    cnts " << cnts1 << endl;
    cout << "------------------------" << endl;

    cout << "        fibonacci2        " << endl;
    cout << "------------------------" << endl;
    int v2 = fibonacci2(7);
    cout << "    结果" << v2 << "    cnts " << cnts2 << endl;
    cout << "------------------------" << endl;
    return 0;
}
