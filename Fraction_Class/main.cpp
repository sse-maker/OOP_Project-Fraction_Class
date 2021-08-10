//
//  main.cpp
//  Fraction_Class
//
//  Created by 세광 on 2021/08/09.
//

#include <iostream>
#include "Fraction.hpp"

using namespace std;

int main() {
    try {
        Fraction fr1;
        fr1.Store(2, 3);

        Fraction fr2(7, 10);
        Fraction fr3;

        fr3 = fr1 + fr2;
        cout << "value of fr3 after fr3 = fr1 + fr2 operation : ";
        fr3.Print();

        fr3 = fr1 - fr2;
        cout << "value of fr3 after fr3 = fr1 - fr2 operation : ";
        fr3.Print();

        fr3 = fr1 * fr2;
        cout << "value of fr3 after fr3 = fr1 * fr2 operation : ";
        fr3.Print();

        fr3 = fr1 / fr2;
        cout << "value of fr3 after fr3 = fr1 / fr2 operation : ";
        fr3.Print();

        fr2 = fr1;
        cout << "value of fr2 after fr2 = fr1 operation : ";
        fr2.Print();

        fr2 += fr1;
        cout << "value of fr2 after fr2 += fr1 operation : ";
        fr2.Print();

        fr2++;
        cout << "value of fr2 after fr2++ operation : ";
        fr2.Print();

        ++fr2;
        cout << "value of fr2 after ++fr2 operation : ";
        fr2.Print();
    } catch (int error) {
        cout << "Error! (value of denominator: " << error << ")" << endl;
        exit(1);
    }
    return 0;
}
