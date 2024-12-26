#include <iostream>
using namespace std;

char changeCase(char letter){
    char ans = letter - 'a' + 'A';

    return ans;
}

int main(){
char small = 'd';

cout<< changeCase(small);

}