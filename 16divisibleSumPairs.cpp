/*
Given an array of integers and a positive integer , determine the number of  pairs where  and  +  is divisible by .

Example



Three pairs meet the criteria:  and .

Function Description

Complete the divisibleSumPairs function in the editor below.

divisibleSumPairs has the following parameter(s):

int n: the length of array 
int ar[n]: an array of integers
int k: the integer divisor
*/

int divisibleSumPairs(int n, int k, vector<int> ar) {
    int count = 0;
   for(int i = 0; i < n;i++){
       for(int j = 0; j < n; j++){
           if(i<j){
                 if((ar[i] + ar[j])%k==0){
                  count++;
           }
           } 
       }
   }
   return count;
}
