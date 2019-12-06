#include <iostream>

using namespace std;

int main() {
    double m;
    int a, b;
    cin >> m >> a >> b;
    cout.setf(ios::fixed);
    cout.precision(12);
    cout << m / a;
    return 0;
}
