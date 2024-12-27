#include <iostream>
#include <math.h>
using namespace std;


int checkArmstrong(int n){
int count = 0;
int num = n;
int sum = 0;
bool truth = false;
int power = 0;
while(num){
    num = num/10;
    count++;
}
num = n;
power = count;

while(count > 0){
int rem = num % 10;
sum = sum + pow(rem, power);
num = num/10;  
count--;
}

if(sum == n) truth = true;

cout<<n<< "is a "<< truth<<" Armstrong number"<< " the sum is"<<sum<<endl;

return truth;

}

int main(){
    int num = 127;
    
    cout<<checkArmstrong(num);
}