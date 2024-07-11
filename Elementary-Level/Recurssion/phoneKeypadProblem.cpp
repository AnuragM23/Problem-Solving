/*
[LEETCODE 17] https://leetcode.com/problems/letter-combinations-of-a-phone-number/

---> Question :-  Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

 

Example 1:

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

Example 2:

Input: digits = ""
Output: []

Example 3:

Input: digits = "2"
Output: ["a","b","c"]

*/

#include<bits/stdc++.h>
using namespace std;

void solve(string digits, string output, int index, vector<string> &ans, vector<string> mapping){
        if(index>=digits.length()) {
            ans.push_back(output);
            return;
        }

        
        int digit = digits[index]-'0';
        string value = mapping[digit];
        for(int i=0; i<value.length(); i++){
            output.push_back(value[i]);
            solve(digits, output, index+1, ans, mapping);
            output.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        
        int index=0;
        vector<string> ans;
        if(digits.length() == 0) return ans;
        string output="";
        vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, output, index, ans, mapping);
        return ans;
    }