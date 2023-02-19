#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

class Solution {
private:
    int counter_1 = 0;
    int counter_2 = 0;
    int counter_3 = 0;
public:
    bool isValid(string s) {
        for (int i = 0; i < s.size(); ++i) {
            switch (s[i]) {
                case '(':
                    counter_1++;
                case
            }
            if(s[i] == '{') counter_1++;
            else if(s[i] == '}') counter_1--;
            else if(s[i] == '[') counter_2++;
            else if(s[i] == ']') counter_2--;
            else if(s[i] == '(') counter_3++;
            else if(s[i] == ')') counter_3--;

        }
        if(counter_1 == counter_2 == counter_3 == 0) return 1;
        else return 0;
    }
};

int main() {
    Solution qwe;
    cout<<qwe.isValid("{{}}[]");
}