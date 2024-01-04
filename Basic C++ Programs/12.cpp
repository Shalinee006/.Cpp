// Compound Interest
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double p = 1000, r = 10, t = 2, CI;
    r = r/100;
    CI = (p * std::pow(1 + r, t) - p);
    cout << CI;

    return 0;
}
