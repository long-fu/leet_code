#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        string res;
        int temp = 'z' - 'Z';
        for (auto ch: s)
        {
            if(ch >= 'A' && ch <= 'Z') {
                char ct = ch + temp;
                res.push_back(ct);
            }
            else {
                res.push_back(ch);
            }
        }
        return res;
    }
};

int main(int, char**){
    // std::cout << "Hello, from leet_code!\n";
    // string jewels = "aA", stones = "aAAbbbb";
    string s="Hello";
    string out = Solution().toLowerCase(s);
    cout << out << endl;
}
