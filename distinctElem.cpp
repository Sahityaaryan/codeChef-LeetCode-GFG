#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

void printV(vector<int> v)
{

    int i = 0;

    while (i < v.size())
    {

        cout << v[i] << " ";
        i++;
    }
    cout << "\n";

    return;
}

vector<int> frequencyVector ( vector<int> hand){
    

    vector<int> v;

    int i = 0;
    int freq = 1;
    sort(hand.begin(),hand.end());


    while( i < hand.size()){

        if( hand[i]==hand[i+1] ){
            freq++;
        }
        else{
            v.push_back(freq);
            freq = 1;
        }

        i++;
    }
    
    return v;


}


int main(){
    vector<int> hand= {1,1,1,2,2,2};

    sort(hand.begin(), hand.end(), greater<int>());

    vector<int> help = frequencyVector(hand);


    

    // printV(help);
    // cout << endl;
    // printV(hand);

   

    // int distinct = hand.size();
    // int pl = 0;
    // while( pl<hand.size()-1 ){



    //     if(hand[pl]==hand[pl+1])   distinct--;
    //     pl++;
    // }


    return 0;
}