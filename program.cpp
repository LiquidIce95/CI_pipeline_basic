
#include "util.h"

#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    if (argc != 3) {
        cerr << "Bitte geben Sie genau zwei Zahlen ein." << std::endl;
        return 1;
    }
    double num1 = stod(argv[1]);
    double num2 = stod(argv[2]);

    int res = sum(num1,num2);


    cout<<"\nDie Summe ist "<<res<<endl;


    return 0;
}