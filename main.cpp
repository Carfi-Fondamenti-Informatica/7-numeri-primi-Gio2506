#include <iostream>
#include "lib.h"

int main() {
    using namespace std;
    int a=0,b=2;
    bool risultato=primi(a,b);
    cin>>a;
    if(risultato){
        cout<<"numero primo"<<endl;
    }else{
        cout<<"numero non primo"<<endl;
    }
    return 0;
}
