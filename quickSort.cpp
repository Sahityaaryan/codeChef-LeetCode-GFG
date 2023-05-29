#include <iostream>
#include <vector>
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

void qs(vector<int> v, int low, int high)
    {

        if (low < high){


        int pivot = v[low];
        int i = low;
        int j = high;

        while (i < j)
        {

            while ((v[i] <= pivot) && i <= (high - 1))
            {
                i++;
            }

            while ((v[j] > pivot) && (j >= low + 1))
            {
                j--;
            }

            if (i < j)
            {
                swap(v[i], v[j]);
            }
        }
        swap(v[low], v[j]);

        int pIndex = j;

        qs(v, low, pIndex - 1);
        qs(v, pIndex + 1, high);
        }

        return;
    }

    int main()
{

    vector<int> v = {1,4,3,6,7,3};


     qs(v, 0 , v.size()-1);

    printV(v);
    
    return 0;
}

// 23:11
// void qs(vector<int> v, int low, int high)
// {

//     if (low >= high)
//         return;

//     int pivot = v[low];
//     int i = low;
//     int j = high;

//     while (i < j)
//     {

//         while ((v[i] <= pivot) && i <= (high - 1))
//         {
//             i++;
//         }

//         while ((v[j] > pivot) && (j >= low + 1))
//         {
//             j--;
//         }

//         if (i < j)
//         {
//             swap(v[i], v[j]);
//         }
//     }
//     swap(v[low], v[j]);

//     int pIndex = j;

//     qs(v, low, pIndex - 1);
//     qs(v, pIndex + 1, high);
// }