#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int count = 0;
        vector<int> res=vector<int>(nums.size(),0);
        for (size_t i = 0; i < nums.size(); i++)
        {
            count = count + nums[i];
            res[i] = count;
        }
        
        return res;
    }
};

int main(int, char**){

    vector<int> nums = {3,1,2,10,1};
    auto out = Solution().runningSum(nums);
    for (size_t i = 0; i < out.size(); i++)
    {
        int item = out[i];
        cout << item << ",";
    }

    cout << endl;
    
    // cout << out << endl;
}
