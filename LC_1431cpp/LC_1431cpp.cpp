#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<int> arr(candies.begin(), candies.end());
    vector<bool> result(candies.size());
    sort(arr.begin(), arr.end());
    int numMin = arr.back() - extraCandies;
    for (int i = 0; i < candies.size(); i++)
    {
        if (candies[i] < numMin)
        {
            result[i] = false;
        }
        else
            result[i] = true;
    }
    return result;
}
int main()
{
    vector<int> dr = { 2,3,5,1,3 };
    vector<bool> a = kidsWithCandies(dr, 3);
    
}
