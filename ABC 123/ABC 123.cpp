/*
Caden Archer
7/30/2023
Name; ABC 123
Discription: Using a template I devide numbers by half

*/


#include <iostream>
#include <cmath>

using namespace std;


template <typename H>

H Half(H InputNumber) {//divide the number in half
     return InputNumber / 2;
}

int Half(int InputNumber) {
    return round(static_cast<double>(InputNumber) / 2);//returns a number rounded in half if its a int only

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

