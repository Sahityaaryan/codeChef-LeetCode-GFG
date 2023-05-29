#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printV(vector<int> v){

    int i = 0;

    while( i<v.size() ){

        cout << v[i]<<" ";
        i++;
    }
    cout << "\n";

    return;

}

bool answer(int N, int groupSize, vector<int> &hand){


    if (N % groupSize != 0) {

        return false;
    }

    if(groupSize==1){
        return true;
    }

    int distinct = hand.size();
    int pl = 0;
    while (pl < hand.size() - 1)
    {

        if (hand[pl] == hand[pl + 1])
            distinct--;
        pl++;
    }

    if(distinct < groupSize) return false;

    int count = 0;
    int check = 0;
    int lim = N/groupSize;
    int i = 0;

    sort(hand.begin() , hand.end());


        while (i < (hand.size() - 1))
    {
        if(count != (groupSize - 1)){

            if(( hand[i] == hand[i+1]) || ( hand[i + 1]== hand[i] + 1)){
                count++;
            }

            if( count == (groupSize - 1)){
                check++;

                if(check == lim){
                    return true;
                }
                else{
                     count = 0;
                     i++;
                     }
            }
        }


        i++;
    }

    return false;
    
}

    int main()
{

    int N = 6;
    int groupSize = 3;
    vector<int> hand = {1,5,3,7,9,11};

    cout << answer(N,groupSize,hand);
   

        return 0;
}