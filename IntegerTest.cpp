#include "std_lib_facilities.h"

int main(){
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    if(x % 2 == 0){
        cout << "The value " << x << " is an even number";
    }
    else{
        cout << "The value " << x << " is an odd number";
    }

    return 0;
}