/*
---> Question [ https://leetcode.com/problems/valid-palindrome/description/]

Valid Palindrome
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.



*/



#include <bits/stdc++.h> 
using namespace std;
int isNumAlpha(char ch){
    if(ch>='0' && ch<='9') return 1;
    else if(ch>='A' && ch<='Z') return 1;
    else if(ch>='a' && ch<='z') return 1;
    else return 0;
}
bool checkPalindrome(string str)
{
    string s = str;
    int start=0, end=s.length()-1;
    while(start<=end){
        s.at(start) = toupper(str.at(start));
        s.at(end) = toupper(str.at(end));
        if(!isNumAlpha(s.at(start))){
            start++;
            continue;
        }
        if(!isNumAlpha(s.at(end))){
            end--;
            continue;
        }
        if(s.at(start++) != s.at(end--)) return false;
    }
    return true;
}