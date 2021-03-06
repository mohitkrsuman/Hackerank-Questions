/*
You are choreographing a circus show with various animals. For one act, you are given two kangaroos on a number line ready to jump in the positive direction (i.e, toward positive infinity).

The first kangaroo starts at location  and moves at a rate of  meters per jump.
The second kangaroo starts at location  and moves at a rate of  meters per jump.
You have to figure out a way to get both kangaroos at the same location at the same time as part of the show. If it is possible, return YES, otherwise return NO.

Example




After one jump, they are both at , (, ), so the answer is YES.

*/

string kangaroo(int x1, int v1, int x2, int v2) {
    int timeForX1 = 0, timeForX2 = 0;  
    int i = 1;
    if((x2 + v2)/(x1 + v1) < v1){
        while(timeForX1 == timeForX2){
        timeForX1 = x1 + (v1*i);
        timeForX2 = x2 + (v2*i);
        i++;
        return "YES";
      }
    }
    
   
    return "NO";
}
