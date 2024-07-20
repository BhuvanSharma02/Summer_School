#include<bits/stdc++.h>
using namespace std;

 
 int findMaxConsecutiveOnes(vector<int>& nums) {

  int sum=0,mSum=0;

  for(int i=0;i<nums.size();i++)

  {

   if(nums[i]==0)

   {

    sum=0;

   }

   else{

    sum+=1;

    if(sum>mSum)

     mSum=sum;

   }

  }

  return mSum;

}

int main () {
  int value;
  vector<int> number = {0,0,1,1,1,0,0,1,1};
  value = findMaxConsecutiveOnes(number);
  cout << value;

}