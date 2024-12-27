#include <iostream>
using namespace std;
#include <math.h>

int main(){

int num = 32;
int base = 2;
int binary = 0;
int power = 0;


while(num > 0){
  int rem = num % 2;
  binary = rem * pow(10, power) + binary;
  num = num/2;
  power++;
}


int bin = 10011;
int deci = 0;
int powe = 0;

while(bin > 0){
int rem = bin % 10;
deci = rem * pow(2, powe) + deci;
bin = bin/10;
powe++;
}


cout<< deci<<endl;
cout<< binary;

  return 0;
}