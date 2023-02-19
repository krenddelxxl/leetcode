#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>
#include <unordered_map>

class Solution {
public:
    int romanToInt(std::string s) {
        int ans=0;
        std::unordered_map <char,int> mp{
                {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

        for(int i=0;i<s.size();i++){
            if(mp[s[i]]<mp[s[i+1]]){
                //for cases such as IV,CM, XL, etc...
                ans=ans-mp[s[i]];
            }
            else{
                ans=ans+mp[s[i]];
            }
        }
        return ans;
    }
};

int main() {
    std::string s = "VII";
    int q = 0;
    Solution qwe;
    std::cout << qwe.romanToInt(s);

//    int result = 0;
//    for (int i = 0; i < s.size(); ++i) {
//
//        if(s[i] == 'I') result+=1;
//        else if(s[i] == 'V') result+=5;
//        else if(s[i] == 'X') result+=10;
//        else if(s[i] == 'L') result+=50;
//        else if(s[i] == 'C') result+=100;
//        else if(s[i] == 'D') result+=500;
//        else if(s[i] == 'M') result+=1000;
//    }
//    std::cout << result;

}
