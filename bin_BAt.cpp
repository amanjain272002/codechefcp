#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        long int n, a, b, calculate, root;
        cin >> n >> a >> b;
        root = log2(n);
        calculate = root * a + (root - 1) * b;
        cout << calculate << endl;
    }

    return 0;
}