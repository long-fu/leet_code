#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int index = -1,max = 0, temp_sum = 0;
        for (int i = 0; i < accounts.size(); i++)
        {
            vector<int> account = accounts[i];
            temp_sum = 0;
            for (auto item: account)
            {
                temp_sum = temp_sum + item;
                
            }
            if(max < temp_sum) {
                index = i;
                max = temp_sum;
            }
        }
        return max;
    }
};


int main(int, char**){

    vector<vector<int>> accounts = {{1,2,3},{3,2,1}};

    auto out = Solution().maximumWealth(accounts);
    
    cout << out << endl;

    // for (size_t i = 0; i < out.size(); i++)
    // {
    //     int item = out[i];
    //     cout << item << ",";
    // }

    // cout << endl;
    
    // cout << out << endl;
}
