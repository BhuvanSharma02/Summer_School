/*You are given a string 'STR'. The string contains [a-z] [A-Z] [0-9] [special characters]. You have to find the reverse of the string.

For example:

 If the given string is: STR = "abcde". You have to print the string "edcba".

follow up:

Try to solve the problem in O(1) space complexity. 

*/

#include <bits/stdc++.h> 
string reverseString(string str)
{
	int s=0,e=str.size()-1;
	while(s<e){
		char temp=str[s];
		str[s]=str[e];
		str[e]=temp;
		s++;
		e--;
	}
	return str;
}
