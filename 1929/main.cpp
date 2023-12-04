#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>temp = vector<int>(nums);
        vector<int>res = temp;
        res.insert(res.end(),temp.begin(),temp.end());
        return res;
    }
};

int main(int, char**){
    // std::cout << "Hello, from leet_code!\n";
    vector<int> nums={1,2,3};
    vector<int> out = Solution().getConcatenation(nums);
    for(auto item: out) {
        cout << item << endl;
    }
}
