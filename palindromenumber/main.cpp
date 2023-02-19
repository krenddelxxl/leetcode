#include <iostream>

class Solution {
private:
    long long reverse(long long number){
        long long buffer = number;
        long long reverse_number = 0;

        while (buffer){
            reverse_number = reverse_number * 10 + buffer % 10;
            buffer /= 10;
        }
         return reverse_number;
    }
public:
    bool isPalindrome(long long number) {
        if(number < 0) return false;
        if(number == reverse(number )) return true;
        else return false;

    }
};

int main() {
    Solution qwe;
    std::cout << qwe.isPalindrome(121);
}
