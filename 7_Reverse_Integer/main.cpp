#include <iostream>
using namespace std;
class Solution
{
public:
    int reverse(int x)
    {
        int reminder;
        long long rev = 0;
        while (x != 0)
        {
            reminder = x % 10;
            rev = rev * 10 + reminder;
            x /= 10;
        }
        if (rev < -2147483648 || rev > 2147483647)
            return 0;
        else
            return rev;
    }
};
int main()
{
    Solution a;
    a.reverse(-2147483648);
    
}