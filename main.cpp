#include "classes.h"
#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
  deck d =  deck();
  d.shuffle();
  d.print();

  return 0;
}