/*
Dominic Stephens
#2338728
CPSC-01 298 C++
January 15, 2021
*/

#include <iostream>
using namespace std;

class foo{
  public:

    float taxRate;
    float cost;
    float totalTax;

}

  addTax(float taxRate, float cost){
    totalTax = cost + (taxRate/100 * cost);
}

int main(){

  return 0;
}
