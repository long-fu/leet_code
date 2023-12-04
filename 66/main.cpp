#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {

        // vector<int> res = vector<int>(digits);

        int max_index = digits.size() - 1;
        digits[max_index] = digits[max_index] + 1;

        int y_s = 0;
        int s_s = 0;

        for (int i = max_index; i >= 0; i--)
        {
            int temp = digits[i] + s_s;
            if (temp >= 0)
            {
                s_s = temp / 10;
                y_s = temp % 10;
                digits[i] = y_s;
            }
        }

        if (s_s > 0)
        {
            digits.insert(digits.begin(), s_s);
        }

        return digits;
    }
};

int main(int, char **)
{
    // std::cout << "Hello, from leet_code!\n";
    // string jewels = "aA", stones = "aAAbbbb";
    vector<int> s = {9};
    vector<int> out = Solution().plusOne(s);
    for (auto i : out)
    {
        cout << i << " ";
    }
    cout << endl;
    // cout << out << endl;
}
