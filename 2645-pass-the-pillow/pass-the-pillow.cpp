class Solution {
public:
    int passThePillow(int n, int time) {
     int dirchange=time/(n-1);
     int dir=dirchange%2;
     int move=time%(n-1);
     if(!dir) return move+1;
     return n-move;   
    }
};