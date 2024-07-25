/*1704. Determine if String Halves Are Alike
Solved
Easy
Topics
Companies
Hint

You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.

Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.

Return true if a and b are alike. Otherwise, return false.*/

class Solution {
public:

    bool isVowel(char x) {
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o'
        || x == 'u' || x == 'A' || x == 'E' || x == 'I'
        || x == 'O' || x == 'U') return true;
        return false;
    }
    bool halvesAreAlike(string s) {
        int count0 = 0, count1 = 0;
        int n = s.length()/2;
        int j = n;
        for (int i = 0; i < n; i++) {
            if (isVowel(s[i])) count0++;
            if(isVowel(s[j])) count1++;
            j++;
        }   
        if (count0 == count1) return true;
        return false;
    }
};
