#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

float funzione( float a){
    float risultato;
    risultato = pow( a,2)* cos(a)+1;

    return risultato;
};

int main() {
    float a,b,x;
    cout << "inserire estremi" << endl;
    cin >> a;
    cin >> b;

    while(funzione(a)*funzione(b)>=0){
        cout << "inserire estremi" << endl;
        cin >> a;
        cin >> b;
    };

    while( abs((a-b)/2) >= (1/(pow(10,6)))){
        x=(a+b)/2;
        if (funzione(x)==0){
            cout << x << endl;
            cout << funzione(x) << endl;
            return 0;
        } else {
            if (funzione(x)*funzione(b)<0 ){
                a=x;
            } else {
                b=x;
            }
        }
    }
    cout <<setprecision(4)<< x << endl;
    return 0;
}
