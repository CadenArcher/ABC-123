#include <iostream>
#include <cmath>

using namespace std;


template <typename H>

H Half(H InputNumber) {
    return InputNumber / 2;
}

int Half(int InputNumber) {
    return round(static_cast<double>(InputNumber) / 2);

}

int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << Half(a) << endl
        << Half(b) << endl
        << Half(c) << endl;


}

