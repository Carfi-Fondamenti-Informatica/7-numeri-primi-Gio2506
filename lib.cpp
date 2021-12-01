#include <iostream>
#include "lib.h"
bool numeroprimo(int a, int d){
   
   if (a<2){
      return false;
   }
   if (a==2){
         return true;
      }

       int resto=a%d;
        if (resto==0) {
            return false;
        }
      if (b>2){
         bool risultato= numeroprimo(a,d-1);
         return risultato;
         }
   return true ;
}
