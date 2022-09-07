#include <iostream>
using namespace std;

int main() {
    double x=5.5;
    double *apuntador =&x;
    cout<< *apuntador<<'\n';
    *apuntador= 10;
    cout << x <<'\n';

    //cout << "Hola mundo, bienvenidos!" << endl;
    return 0;
}