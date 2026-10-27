class Solution {
public:

    int water(int empty , int numExchange ,int total){
        if(empty<numExchange){
            return total;
        }
        int newbottles=empty/numExchange;
        int remaining = empty % numExchange;
        return water(remaining + newbottles , numExchange, total+newbottles);

    }
    int numWaterBottles(int numBottles, int numExchange) {
        return water(numBottles, numExchange , numBottles);
    }
};