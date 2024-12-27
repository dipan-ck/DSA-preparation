#include <iostream>
using namespace std;



int main(){

int num1 = 0;
int num2 = 1;

int inp = 6;

int sum = 0;

for(int i = 2; i<=inp; i++){
int sum = num1 + num2;
num1 = num2;
num2 = sum;
}

cout<<num2;

}