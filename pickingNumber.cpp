/*
Given an array of integers, find the longest subarray where the absolute difference between any two elements is less than or equal to .

Example


There are two subarrays meeting the criterion:  and . The maximum length subarray has  elements.

Function Description

Complete the pickingNumbers function in the editor below.

pickingNumbers has the following parameter(s):

int a[n]: an array of integers
Returns

int: the length of the longest subarray that meets the criterion
Input Format

The first line contains a single integer , the size of the array .
The second line contains  space-separated integers, each an .

Constraints

The answer will be .
Sample Input 0

6
4 6 5 3 3 1
Sample Output 0

3
Explanation 0

We choose the following multiset of integers from the array: . Each pair in the multiset has an absolute difference  (i.e.,  and ), so we print the number of chosen integers, , as our answer.

*/

  sort(a.begin(), a.end());
  int start = 0, len = 0, num = 1;
  for(int i = 0; i < a.size(); i ++){
      if(a[i] - a[start] >= 2){
          num = 1;
          len = max(len, i-start);  // it will contain maxm value coming form previous arrays;
          start = i; 
      }else{
          num++;
      }
  }
  return max(len , num);

}