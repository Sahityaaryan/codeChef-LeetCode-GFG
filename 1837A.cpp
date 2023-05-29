#include <iostream>
using namespace std;

void sol( int n, int k){

    if( n==0 ) {
        cout << 0 <<'\n';
        cout << 0 << '\n';
        return ;}

    if (k > n || n % k != 0)
    {
        cout << 1 << '\n';
        cout << n << '\n';
        return;
    }
   else
    {
        cout << 2 << '\n';
       int i = 1;

       while( (i % k != 0) && ((n - i) % k !=0) ){
        i++;
       }
        cout << i << " " << n-i << "\n";
        return;
    }
}


int main(){
        int t;
        cin >> t;

        while( t-- ){

            int n,k;

            cin >> n >> k;

           sol(n,k);
        }    
    return 0;
}