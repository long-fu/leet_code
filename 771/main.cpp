#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        // cout << jewels.size() << endl;
        int a = 'A', Z = 'z';
        int ct = Z - a + 1;
        vector<int> key=vector<int>(ct, 0);
        for (auto ci: jewels) {
            int tp = ci;
            int i = tp - a;
            key[i] = 1;
        }
        int res = 0;
        for(auto ci: stones) {
            int tp = ci;
            int i = tp - a;
            res = res + key[i];
        }
        return res;
    }
};

int main(int, char**){
    // std::cout << "Hello, from leet_code!\n";
    // string jewels = "aA", stones = "aAAbbbb";
    string jewels = "z", stones = "ZZ";
    int out = Solution().numJewelsInStones(jewels,stones);
    cout << out << endl;
}
