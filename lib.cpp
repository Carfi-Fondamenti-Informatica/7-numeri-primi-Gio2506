#include "lib.h.h"
bool primi (int a, int d){
   int resto=a%d;
if (a>=2){
    if(d<a){
        resto=a%d;
        if (resto != 0) {
            return primi(a, d + 1);
        } else {
            return false;
        }
        }else {
        return true;
    }
        }else if (a == 2) {
            return true;
        } else {
            return false;
        }

}
