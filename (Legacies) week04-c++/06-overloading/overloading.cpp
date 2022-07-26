#include <stdio.h>

using namespace std;

class Complex {
private:
    int _real_part;
    int _imaginary_part;

public:
    Complex(int real_part, int imaginary_part);
    int get_real_part();
    int get_imaginary_part();
};

Complex::Complex(int real_part, int imaginary_part) {
    _real_part = real_part;
    _imaginary_part = imaginary_part;
}

int Complex::get_real_part() {
    return _real_part;
}

int Complex::get_imaginary_part() {
    return _imaginary_part;
}

void add_and_print(Complex c1, Complex c2){
    int final_real_part = c1.get_real_part() + c2.get_real_part();
    int final_imaginary_part = c1.get_imaginary_part() + c2.get_imaginary_part();

    printf("(%d+%di) + (%d+%di) = (%d+%di)", c1.get_real_part(), c1.get_imaginary_part(), c2.get_real_part(), c2.get_imaginary_part(),
    final_real_part, final_imaginary_part);
}

void add_and_print(int i1, int i2){
    printf("%d + %d = %d", i1, i2, i1 + i2);
}

void add_and_print(double d1, double d2){
    printf("%.6f + %.6f = %.6f", d1, d2, d1 + d2);
}

int main(int argc, char **argv) {
    Complex c1(4, 5);
    Complex c2(9, 11);
    int i1 = 4, i2 = 9;
    double d1 = 5.8, d2 = 11.2;

    add_and_print(c1, c2); // should print "(4+5i) + (9+11i) = (13+16i)"
    add_and_print(i1, i2); // should print "4 + 9 = 13"
    add_and_print(d1, d2); // should print "5.800000 + 11.200000 = 17.000000"

    return 0;
}

// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log olivierpierre/comp26020-problems/2021-2022/week4-c++/06-overloading