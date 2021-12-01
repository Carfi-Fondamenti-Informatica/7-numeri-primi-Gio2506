#include <iostream>
#include "lib.h"

using namespace std;
int n;
int main() {
    cin>>n;
    if(ric(2,n)) {
        cout << "numero primo" << endl;
    }else{
        cout << "numero non primo" << endl;
    }
    return 0;
}
