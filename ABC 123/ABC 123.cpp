#include <iostream>
#include <cmath>

using namespace std;


template <typename H>

H Half(H InputNumber) {
    cout << InputNumber / 2;
}

int Half(int InputNumber) {
    return round(static_cast<double>(InputNumber) / 2);

}

int main()
{
    
}

