#include <iostream>
using namespace std;

void checkRectangle(int a, int b, int c, int d){
    if((a == b && c==d) || (a==c && b==d) ||(a==d && b ==c)){
        cout<<"It can form a Rectangle"<<endl;
    }else{
        cout<< "It can not form a Rectangle"<<endl;
    }
}

int main(){

checkRectangle(4,2,2,4);
return 0;

}