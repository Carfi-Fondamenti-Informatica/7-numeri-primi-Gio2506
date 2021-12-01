#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int a=0;
    int b=2;
    bool risultato=primi (a,b);
    cin>>a;
    if(risultato){
        cout<<"numero primo"<<endl;
    }else{
        cout<<"numero non primo"<<endl;
    }
    return 0;
}
