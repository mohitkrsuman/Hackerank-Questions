/*
Given an array of bird sightings where every element represents a bird type id, determine the id of the most frequently sighted type. If more than 1 type has been spotted that maximum amount, return the smallest of their ids.

Example

There are two each of types  and , and one sighting of type . Pick the lower of the two types seen twice: type .

Function Description

Complete the migratoryBirds function in the editor below.

migratoryBirds has the following parameter(s):

int arr[n]: the types of birds sighted
Returns

int: the lowest type id of the most frequently sighted birds
Input Format

The first line contains an integer, , the size of .
The second line describes  as  space-separated integers, each a type number of the bird sighted.

Constraints

It is guaranteed that each type is , , , , or .
Sample Input 0

6
1 4 4 4 5 3
Sample Output 0

4
Explanation 0

The different types of birds occur in the following frequencies:

Type :  bird
Type :  birds
Type :  bird
Type :  birds
Type :  bird
The type number that occurs at the highest frequency is type , so we print  as our answer.

*/

int migratoryBirds(vector<int> arr) {
    // Making Frequency table 
    // int max = 0, result = 0;
    // int freq[] = {0};
    // for(int i = 0; i < arr.size(); i++){
    //     int id = arr[i];
    //     freq[id]++;
    //     if (freq[id] > max) {
    //        max = freq[id];
    //        result = id;
    //     } else if (freq[id] == max) {
    //        result = min(result, id);
    //     }
    // }
    // return result;
    
    map<int, int>birds;
    for(int&b : arr){
        birds[b]++;
    }
    
    //Track which type of bird is most commonly seen
    map<int, int>::iterator tracker = birds.begin();
    
    // Most commonly seen type 
    for(map<int, int>::iterator itr = ++tracker; itr != birds.end(); ++itr){
        if(itr->second > tracker->second){
            tracker = itr;
        }else if (itr->second == tracker->second){
            tracker = (tracker->first < itr->first)?tracker:itr;
        } 
    }
    return tracker->first;
}