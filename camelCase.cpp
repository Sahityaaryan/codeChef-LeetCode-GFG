#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_map>
using namespace std;

void printM(unordered_map<string, string> mpp)
{

    unordered_map<string, string>::iterator it = mpp.begin();

    while (it != mpp.end()){

        cout << it->first << " -> " << it->second << "\n";

        it++;
    }
    cout << "\n";

    return;
}

void printV(vector<string> v)
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

vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern)
{

    unordered_map<string, string> mpp;

    int i = 0;
    int j;

    while (i < N)
    {
        j = 0;

        while (j < Dictionary[i].size())
        {
            int dig = (int)Dictionary[i][j];

            if (dig >= 65 && dig <= 96)
            {
                mpp[Dictionary[i]] += Dictionary[i][j]; 
            }

            j++;
        }

        i++;
    }

        vector<string> ans;

    i = 0;

    while (i < Dictionary.size())
    {
        string help = mpp[Dictionary[i]];

        bool isThere = false;

        j = 0;

        while (j < Pattern.size()){

            if (Pattern[j] == help[j]){
                isThere = true;
            }
            else{
                isThere = false;
                break;
            }

            j++;
        }

        if (isThere) {
            ans.emplace_back(Dictionary[i]);
        }

            i++;
    }
    
   if( ans.size() != 0) return ans;
   else return {"-1"};
}

int main(){

    vector<string> str = {"Hi", "Hello", "HelloWorld",
                          "HiTech", "HiGeek", "HiTechWorld",
                          "HiTechCity", "HiTechLab"};

    int n = 8;

    string pattern = "HT";

    vector<string> v = CamelCase(n , str , pattern);

    int i = 0;

    while (i < v.size())
    {

        cout << v[i] << " ";
        i++;
    }
    cout << "\n";

    return 0;
}