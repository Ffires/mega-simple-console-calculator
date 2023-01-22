#include <iostream>
using namespace std;

double calc(double x,char ot, double y) {
    switch (ot) {
        case '-':
            return x - y;
            break;
        case '+':
            return x + y;
            break;
        case '*':
            return x * y;
            break;
        case '/':
            return x / y;
            break;
    }

}


int main() {
    double x, y, result;
    char ot;


    cout << "it's easy calculator" << endl << "print math solv" << endl;
    while (true) {
        cin>>x>>ot>> y;
        result = calc(x, ot, y);
        cout << result << endl;
    }
        
}