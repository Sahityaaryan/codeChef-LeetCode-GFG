
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sol (int X){

    
    int num = 1;

    while( num< X ){

        num*=2;
    }
    
    int diffO = X - num/2;

    if( diffO<0) diffO*=(-1);

    int diffT = X - num;

    if( diffT<0) diffT*=(-1);

    if( diffO > diffT){ return num;}
    else if( diffO ==diffT){ return num;}
    else { return num/2;}




}

int main(){
    

    int x = 11;

    cout << sol(x);
    
    return 0;
}