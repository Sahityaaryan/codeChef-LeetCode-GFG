#include <iostream>
using namespace std;
int main(){
        
        int mrow = 2;

        int rows = 2*mrow;

        int cols = mrow*(mrow +1 )/2;

        int mid = cols; 

        int i = 0;
        while (i<rows){

            int j =0;
            while( j< cols ){

                if(i>=mrow){

                    if ( (j>=rows - i - mid) || (j<= rows - i + mid)){cout << '*';}

                    else{ cout << " ";}
                }
            else{

                if( j>=mid-i && j<=mid+i ){
                    cout << '*';
                }
                else{cout << " ";}
            }
            j++;
        }
        cout << "\n";
        

        i++;
    }
    return 0;
}