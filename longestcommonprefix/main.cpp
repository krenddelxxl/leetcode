#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::vector;
using std::string;
using std::cout;
using std::cin;

class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string ans=""; //to store result
        sort(str.begin(), str.end());

        string firstStr=str[0];
        string lastStr=str[str.size()-1];
        for(int i=0; i<firstStr.size(); i++)
        {
            if(firstStr[i]==lastStr[i])//compair first string alphabet with last string alphabet
            {
                ans=ans+firstStr[i];
            }
            else
                break;
        }
        return ans;
    }
};

int main() {
//    Input: strs = ["flower","flow","flight"]
//    Output: "fl"
    Solution qwe;
    vector<string> words = {"flower","flowe","flow","flo"};

    cout << qwe.longestCommonPrefix(words) << '\n';

    //cout << words[0].substr(0,2);
}